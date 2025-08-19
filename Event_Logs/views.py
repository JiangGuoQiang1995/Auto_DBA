from django.shortcuts import render,HttpResponse
from .models import *

# Create your views here.
def Event_Logs(request):
    return render(request,'Event_Logs.html',{'active_memu':'event_log',})
def Knowledge_Base(request):
    return render(request,'Knowledge_Base.html',{'active_memu':'knowledge',})