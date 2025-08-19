from django.shortcuts import render,HttpResponse
from .models import *


# Create your views here.
def Databases_Config(request):
    my_db_config = Databases_Configurations.objects.all().order_by('DB_id')
    return render(request,'Databases_Config.html',{'active_memu':'config','sub_menu':'db_config','my_db_config':my_db_config,})

def Monitoring_Config(request):
    return render(request,'Monitoring_Config.html',{'active_memu':'monitor_config',})

def Accounts_Config(request):
    return render(request,'Accounts_Config.html',{'active_memu':'account',})
