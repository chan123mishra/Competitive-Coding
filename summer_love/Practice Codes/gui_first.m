function varargout = gui_first(varargin)
% GUI_FIRST MATLAB code for gui_first.fig
%      GUI_FIRST, by itself, creates a new GUI_FIRST or raises the existing
%      singleton*.
%
%      H = GUI_FIRST returns the handle to a new GUI_FIRST or the handle to
%      the existing singleton*.
%
%      GUI_FIRST('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GUI_FIRST.M with the given input arguments.
%
%      GUI_FIRST('Property','Value',...) creates a new GUI_FIRST or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before gui_first_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to gui_first_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help gui_first

% Last Modified by GUIDE v2.5 17-Apr-2016 00:51:41

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @gui_first_OpeningFcn, ...
                   'gui_OutputFcn',  @gui_first_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before gui_first is made visible.
function gui_first_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to gui_first (see VARARGIN)

% Choose default command line output for gui_first
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes gui_first wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = gui_first_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
