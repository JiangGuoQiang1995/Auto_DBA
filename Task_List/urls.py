from django.urls import path
from . import views

app_name = 'Task_List'
#在urls.py中设置应用名app_name='',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('Task_List/', views.Task_List, name='Task_List'),                  #任务列表
    path('Task_manager/', views.Task_manager, name='Task_manager'),         #任务管理
]