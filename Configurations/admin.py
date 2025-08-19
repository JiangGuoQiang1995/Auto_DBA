from django.contrib import admin
from .models import *

# Register your models here.
class AccountAdmin(admin.ModelAdmin):
    list_display = ['account_name','my_password','account_mail','account_authority','account_create_time','account_update_time','account_validity','authority_code']

admin.site.register(Accounts_Configurations, AccountAdmin)

class DatabasesAdmn(admin.ModelAdmin):
    list_display = ['DB_type','DB_name','DB_user','DB_password','DB_port','DB_platform','last_updatetime','DB_endpoint','DB_access_cmd']

admin.site.register(Databases_Configurations, DatabasesAdmn)

class MonitoringAdmn(admin.ModelAdmin):
    list_display = ['metric_id','metric_name','metric_db_type','metric_access','metric_instance','metric_threshold','metric_frequency','metric_notification']

admin.site.register(Monitoring_Configurations, MonitoringAdmn)

admin.site.site_header = 'DBA数据库管理平台'
admin.site.site_title = 'DBA数据库管理平台'