from django.urls import path
from . import views

app_name = 'Event_Logs'
#在urls.py中设置应用名app_name='',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('Event_Logs/', views.Event_Logs, name='Event_Logs'),               #故障记录
    path('Knowledge_Base/', views.Knowledge_Base, name='Knowledge_Base'),   #知识库
]