from django.contrib import admin
from .models import *

# Register your models here.
class TaskAdmin(admin.ModelAdmin):
    list_display = ['task_id','task_code','task_title','task_level','task_status','task_time','task_describe']

admin.site.register(Task_Lists, TaskAdmin)