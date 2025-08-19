from django.urls import path
from . import views

app_name = 'Monitoring'
#在urls.py中设置应用名app_name='',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('DB_Monitoring/', views.DB_Monitoring, name='DB_Monitoring'),                                      #数据库监控
    path('Maintenances_Monitoring/', views.Maintenances_Monitoring, name='Maintenances_Monitoring'),        #维护事件监控
    path('Accounts_Monitoring/', views.Accounts_Monitoring, name='Accounts_Monitoring'),                    #账号&权限监控
    path('Backup_Monitoring/', views.Backup_Monitoring, name='Backup_Monitoring'),                          #备份情况监控
]
