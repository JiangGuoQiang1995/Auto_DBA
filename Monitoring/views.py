from django.shortcuts import render,HttpResponse

# Create your views here.
def DB_Monitoring(request):
    return render(request,'DB_Monitoring.html',{'active_memu':'db_mor',})
def Maintenances_Monitoring(request):
    return render(request,'Maintenances_Monitoring.html',{'active_memu':'mainten_mor',})
def Accounts_Monitoring(request):
    return render(request,'Accounts_Monitoring.html',{'active_memu':'account_mor',})
def Backup_Monitoring(request):
    return render(request,'Backup_Monitoring.html',{'active_memu':'backup_mor',})