"""
URL configuration for Auto_DBA project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.1/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import include, path, re_path
from django.conf.urls import include 
from . import views

from django.conf import settings
from django.conf.urls.static import static


urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.homepage, name='homepage'),                      # 首页
    path('Configurations/', include('Configurations.urls')),        # 配置模块
    path('Monitoring/', include('Monitoring.urls')),                # 监控模块
    path('Operations/', include('Operations.urls')),                # 操作模块
    path('Event_Logs/', include('Event_Logs.urls')),                # 故障记录
    path('Task_List/', include('Task_List.urls')),                  # 任务列表
    path('ueditor/', include('DjangoUeditor.urls')),                # UEditor 路由
]

if settings.DEBUG:
    urlpatterns += static(settings.MEDIA_URL,document_root = settings.MEDIA_ROOT)
                                                           