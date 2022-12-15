import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

builder = Gtk.Builder()

builder.add_from_file('AppDesign.glade')
class Handler(object):

    def __init__(self, **kwargs):
        super(Handler, self).__init__(**kwargs)

        self.label_title = builder.get_object('label1')
        self.number = builder.get_object('entry1')
        self.Ufrom = builder.get_object('cbox1_entry')
        self.Uto = builder.get_object('cbox2_entry')
        self.result = builder.get_object('label2')

    def on_button1_clicked(self, window):
        number_text = self.number.get_text()
        if number_text.isdigit():
            number = int(number_text)
            Ufrom = self.Ufrom.get_text()
            Uto = self.Uto.get_text()
            
            if Ufrom == "m/s":
                if Uto == "milhas/h":
                    self.result.set_text(str(round(number*2.237,2)))
                elif Uto == "km/h":
                    self.result.set_text(str(round(number*3.6)))  
                else: 
                    self.result.set_text(str(number))  
            elif Ufrom == "milhas/h":
                if Uto == "m/s":
                    self.result.set_text(str(round(number/2.237)))  
                elif Uto == "km/h":
                    self.result.set_text(str(round(number*1.609)))  
                else: 
                    self.result.set_text(str(number))
            elif Ufrom == "km/h":
                if Uto == "m/s":
                    self.result.set_text(str(round(number/3.6)))  
                elif Uto == "milhas/h":
                    self.result.set_text(str(round(number/1.609)))  
                else: 
                    self.result.set_text(str(number))
            else: 
                self.result.set_text("Selecione as unidades")

        else: 
            self.result.set_text("Digite um número válido!")

    def on_main_window_destroy(self, window):
        Gtk.main_quit()

builder.connect_signals(Handler())
window = builder.get_object('main_window')
warning = builder.get_object('warning')
window.show_all()

if __name__ == '__main__':
    Gtk.main()