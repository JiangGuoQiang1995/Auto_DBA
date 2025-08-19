from django.shortcuts import render,HttpResponse
from .models import *

# Create your views here.
def Task_List(request):
    return render(request,'Task_List.html',{'active_memu':'task_list',})
def Task_manager(request):
    return render(request,'Task_manager.html',{'active_memu':'task_manager',})