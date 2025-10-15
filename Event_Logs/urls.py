from django.urls import path
from . import views


app_name = 'event_logs'  # 使用小写字母和下划线作为命名空间更符合Django规范
#在urls.py中设置应用名app_name='',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('logs/', views.Event_Logs, {'EventName': 'Event_Logs'}, name='logs'),               #故障记录
    path('knowledge/', views.Knowlege_Base, {'EventName': 'Knowledge_Base'}, name='knowledge'),   #知识库
    path('EventDetail/<int:event_id>',views.EventDetail,name='EventDetail'),
    path('search/', views.search, name='search'),           #新闻搜索
]