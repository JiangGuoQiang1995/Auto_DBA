from django.contrib import admin
from .models import *

# Register your models here.
# Register your models here.
class BackupAdmin(admin.ModelAdmin):
    list_display = ['backup_id','backup_db_type','backup_db_version','backup_instance','backup_db_name','backup_tb_name','backup_type','backup_way','backup_frequency','backup_create_time','backup_path']

admin.site.register(Backup_Restore_Operation, BackupAdmin)

class MaintenancesAdmin(admin.ModelAdmin):
    list_display = ['m_id','m_db_type','m_instance','m_instance','m_operation_type','m_operation_time','m_alter_status','m_operation']

admin.site.register(Maintenances_Operations, MaintenancesAdmin)