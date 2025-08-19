from django.contrib import admin
from .models import *

# Register your models here.
class EventLogsAdmin(admin.ModelAdmin):
    #list_display = ['event_id','event_code','event_describe','event_image','event_level','event_model','event_range','event_time','event_performance','event_reason','event_solution']
    list_display = ['event_id','event_code','event_title','event_describe','event_level','event_model','event_range','event_time','event_reason','event_solution']
    
admin.site.register(My_Event_Logs, EventLogsAdmin)