from django.urls import path
from . import views

app_name = 'Configurations'
#在urls.py中设置应用名app_name='Configurations',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('Databases_Config/', views.Databases_Config, name='Databases_Config'),     #数据库信息配置
    path('Monitoring_Config/', views.Monitoring_Config, name='Monitoring_Config'),  #监控配置
    path('Accounts_Config/', views.Accounts_Config, name='Accounts_Config'),        #账号&权限配置
    # 需要再对应的views.py文件下定义对应的Databases_Config()、Monitoring_Config()、Accounts_Config()函数
]