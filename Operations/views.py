from django.shortcuts import render,HttpResponse
from .models import *

# Create your views here.
def BackUp_Operation(request):
    return render(request,'BackUp_Operation.html',{'active_memu':'backop_op',})
def Maintenances_Operation(request):
    return render(request,'Maintenances_Operation.html',{'active_memu':'mainten_op',})
def inspection_Operation(request):
    return render(request,'inspection_Operation.html',{'active_memu':'inspect_op',})
def MyDataBase(request):
    return render(request,'MyDataBase.html',{'active_memu':'mydb',})