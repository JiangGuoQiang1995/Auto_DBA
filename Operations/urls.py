from django.urls import path
from . import views

app_name = 'Operations'
#在urls.py中设置应用名app_name='Operations',是为了方便后续使用Django模版实现路由的逆向解析

urlpatterns = [
    path('BackUp_Operation/', views.BackUp_Operation, name='BackUp_Operation'),                    #备份与恢复
    path('Maintenances_Operation/', views.Maintenances_Operation, name='Maintenances_Operation'),  #维护事件
    path('inspection_Operation/', views.inspection_Operation, name='inspection_Operation'),        #巡检与故障演练
    path('MyDataBase/', views.MyDataBase, name='MyDataBase'),                                      #数据库设计构想
    # 需要再对应的views.py文件下定义对应的BackUp_Operation()、Maintenances_Operation()、inspection_Operation())函数
]