from django.shortcuts import render,HttpResponse
from .models import *
from django.core.paginator import Paginator
from django.shortcuts import get_object_or_404
from pyquery import PyQuery as pq

# Create your views here.
def Event_Logs(request, EventName):
    submenu = EventName
    if EventName == 'Event_Logs':
        EventName = '故障记录'
    elif EventName == 'Knowledge_Base':
        EventName = '知识库'
    LogList = My_Event_Logs.objects.all().order_by('-event_time')
    for mylog in LogList:
        html = pq(mylog.event_describe)  # 使用pq方法解析html内容
        mylog.mytxt = pq(html)('p').text()  # 截取html段落文字
    # 分页
    p = Paginator(LogList, 5)
    if p.num_pages <= 1:
        pageData = ''
    else:
        page = int(request.GET.get('page', 1))
        LogList = p.page(page)
        left = []
        right = []
        left_has_more = False
        right_has_more = False
        first = False
        last = False
        total_pages = p.num_pages
        page_range = p.page_range
        if page == 1:
            right = page_range[page:page + 2]
            print(total_pages)
            if right[-1] < total_pages - 1:
                right_has_more = True
            if right[-1] < total_pages:
                last = True
        elif page == total_pages:
            left = page_range[(page - 3) if (page - 3) > 0 else 0:page - 1]
            if left[0] > 2:
                left_has_more = True
            if left[0] > 1:
                first = True
        else:
            left = page_range[(page - 3) if (page - 3) > 0 else 0:page - 1]
            right = page_range[page:page + 2]
            if left[0] > 2:
                left_has_more = True
            if left[0] > 1:
                first = True
            if right[-1] < total_pages - 1:
                right_has_more = True
            if right[-1] < total_pages:
                last = True
        pageData = {
            'left': left,
            'right': right,
            'left_has_more': left_has_more,
            'right_has_more': right_has_more,
            'first': first,
            'last': last,
            'total_pages': total_pages,
            'page': page,
        }
    return render(
        request, 'Event_Logs.html', {
            'active_menu': 'event_log',
            'sub_menu': submenu,
            'EventName': EventName,
            'LogList': LogList,
            'pageData': pageData,
        })




def Knowlege_Base(request, EventName):
    submenu = EventName
    if EventName == 'Event_Logs':
        EventName = '故障记录'
    elif EventName == 'Knowledge_Base':
        EventName = '知识库'
    LogList = My_Event_Logs.objects.all().order_by('-event_time')
    for mylog in LogList:
        html = pq(mylog.event_describe)  # 使用pq方法解析html内容
        mylog.mytxt = pq(html)('p').text()  # 截取html段落文字
    # 分页
    p = Paginator(LogList, 5)
    if p.num_pages <= 1:
        pageData = ''
    else:
        page = int(request.GET.get('page', 1))
        LogList = p.page(page)
        left = []
        right = []
        left_has_more = False
        right_has_more = False
        first = False
        last = False
        total_pages = p.num_pages
        page_range = p.page_range
        if page == 1:
            right = page_range[page:page + 2]
            print(total_pages)
            if right[-1] < total_pages - 1:
                right_has_more = True
            if right[-1] < total_pages:
                last = True
        elif page == total_pages:
            left = page_range[(page - 3) if (page - 3) > 0 else 0:page - 1]
            if left[0] > 2:
                left_has_more = True
            if left[0] > 1:
                first = True
        else:
            left = page_range[(page - 3) if (page - 3) > 0 else 0:page - 1]
            right = page_range[page:page + 2]
            if left[0] > 2:
                left_has_more = True
            if left[0] > 1:
                first = True
            if right[-1] < total_pages - 1:
                right_has_more = True
            if right[-1] < total_pages:
                last = True
        pageData = {
            'left': left,
            'right': right,
            'left_has_more': left_has_more,
            'right_has_more': right_has_more,
            'first': first,
            'last': last,
            'total_pages': total_pages,
            'page': page,
        }
    return render(
        request, 'Knowledge_Base.html', {
            'active_menu': 'event_log',
            'sub_menu': submenu,
            'EventName': EventName,
            'LogList': LogList,
            'pageData': pageData,
        })

def EventDetail(request, event_id):
    myevent = get_object_or_404(My_Event_Logs, event_id=event_id)
    myevent.views += 1
    myevent.save()
    return render(request, 'EventDetail.html', {
        'active_menu': 'event_log',
        'myevent': myevent,
    })

def search(request):
    keyword = request.GET.get('keyword')
    eventList = My_Event_Logs.objects.filter(title__icontains=keyword)
    EventName = "关于 " + "\"" + keyword + "\"" + " 的搜索结果"
    return render(request, 'SearchList.html', {
        'active_menu': 'event_log',
        'EventName': EventName,
        'eventList': eventList,
    })
