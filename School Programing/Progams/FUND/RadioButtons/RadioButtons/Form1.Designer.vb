<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.radpie = New System.Windows.Forms.RadioButton()
        Me.grpdesserts = New System.Windows.Forms.GroupBox()
        Me.radicecream = New System.Windows.Forms.RadioButton()
        Me.radcake = New System.Windows.Forms.RadioButton()
        Me.radcookie = New System.Windows.Forms.RadioButton()
        Me.grpdrink = New System.Windows.Forms.GroupBox()
        Me.radcoffee = New System.Windows.Forms.RadioButton()
        Me.radtea = New System.Windows.Forms.RadioButton()
        Me.radsoda = New System.Windows.Forms.RadioButton()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.grpextra = New System.Windows.Forms.GroupBox()
        Me.chksugar = New System.Windows.Forms.CheckBox()
        Me.chklemon = New System.Windows.Forms.CheckBox()
        Me.chksweetener = New System.Windows.Forms.CheckBox()
        Me.grpdesserts.SuspendLayout()
        Me.grpdrink.SuspendLayout()
        Me.grpextra.SuspendLayout()
        Me.SuspendLayout()
        '
        'radpie
        '
        Me.radpie.AutoSize = True
        Me.radpie.Location = New System.Drawing.Point(6, 19)
        Me.radpie.Name = "radpie"
        Me.radpie.Size = New System.Drawing.Size(76, 17)
        Me.radpie.TabIndex = 0
        Me.radpie.TabStop = True
        Me.radpie.Text = "Pie - $2.50"
        Me.radpie.UseVisualStyleBackColor = True
        '
        'grpdesserts
        '
        Me.grpdesserts.Controls.Add(Me.radicecream)
        Me.grpdesserts.Controls.Add(Me.radcake)
        Me.grpdesserts.Controls.Add(Me.radcookie)
        Me.grpdesserts.Controls.Add(Me.radpie)
        Me.grpdesserts.Location = New System.Drawing.Point(12, 12)
        Me.grpdesserts.Name = "grpdesserts"
        Me.grpdesserts.Size = New System.Drawing.Size(214, 100)
        Me.grpdesserts.TabIndex = 1
        Me.grpdesserts.TabStop = False
        Me.grpdesserts.Text = "Desserts:"
        '
        'radicecream
        '
        Me.radicecream.AutoSize = True
        Me.radicecream.Location = New System.Drawing.Point(102, 42)
        Me.radicecream.Name = "radicecream"
        Me.radicecream.Size = New System.Drawing.Size(109, 17)
        Me.radicecream.TabIndex = 3
        Me.radicecream.TabStop = True
        Me.radicecream.Text = "Ice Cream - $1.45"
        Me.radicecream.UseVisualStyleBackColor = True
        '
        'radcake
        '
        Me.radcake.AutoSize = True
        Me.radcake.Location = New System.Drawing.Point(102, 19)
        Me.radcake.Name = "radcake"
        Me.radcake.Size = New System.Drawing.Size(86, 17)
        Me.radcake.TabIndex = 2
        Me.radcake.TabStop = True
        Me.radcake.Text = "Cake - $2.25"
        Me.radcake.UseVisualStyleBackColor = True
        '
        'radcookie
        '
        Me.radcookie.AutoSize = True
        Me.radcookie.Location = New System.Drawing.Point(6, 42)
        Me.radcookie.Name = "radcookie"
        Me.radcookie.Size = New System.Drawing.Size(94, 17)
        Me.radcookie.TabIndex = 1
        Me.radcookie.TabStop = True
        Me.radcookie.Text = "Cookie - $0.75"
        Me.radcookie.UseVisualStyleBackColor = True
        '
        'grpdrink
        '
        Me.grpdrink.Controls.Add(Me.radcoffee)
        Me.grpdrink.Controls.Add(Me.radtea)
        Me.grpdrink.Controls.Add(Me.radsoda)
        Me.grpdrink.Location = New System.Drawing.Point(12, 118)
        Me.grpdrink.Name = "grpdrink"
        Me.grpdrink.Size = New System.Drawing.Size(214, 100)
        Me.grpdrink.TabIndex = 4
        Me.grpdrink.TabStop = False
        Me.grpdrink.Text = "Drink"
        '
        'radcoffee
        '
        Me.radcoffee.AutoSize = True
        Me.radcoffee.Location = New System.Drawing.Point(102, 19)
        Me.radcoffee.Name = "radcoffee"
        Me.radcoffee.Size = New System.Drawing.Size(92, 17)
        Me.radcoffee.TabIndex = 2
        Me.radcoffee.TabStop = True
        Me.radcoffee.Text = "Coffee - $0.50"
        Me.radcoffee.UseVisualStyleBackColor = True
        '
        'radtea
        '
        Me.radtea.AutoSize = True
        Me.radtea.Location = New System.Drawing.Point(6, 42)
        Me.radtea.Name = "radtea"
        Me.radtea.Size = New System.Drawing.Size(80, 17)
        Me.radtea.TabIndex = 1
        Me.radtea.TabStop = True
        Me.radtea.Text = "Tea - $0.60"
        Me.radtea.UseVisualStyleBackColor = True
        '
        'radsoda
        '
        Me.radsoda.AutoSize = True
        Me.radsoda.Location = New System.Drawing.Point(6, 19)
        Me.radsoda.Name = "radsoda"
        Me.radsoda.Size = New System.Drawing.Size(86, 17)
        Me.radsoda.TabIndex = 0
        Me.radsoda.TabStop = True
        Me.radsoda.Text = "Soda - $0.75"
        Me.radsoda.UseVisualStyleBackColor = True
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(93, 229)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(0, 13)
        Me.lbloutput.TabIndex = 5
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(12, 224)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 23)
        Me.Button1.TabIndex = 6
        Me.Button1.Text = "Calculate"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'grpextra
        '
        Me.grpextra.Controls.Add(Me.chksweetener)
        Me.grpextra.Controls.Add(Me.chklemon)
        Me.grpextra.Controls.Add(Me.chksugar)
        Me.grpextra.Location = New System.Drawing.Point(232, 12)
        Me.grpextra.Name = "grpextra"
        Me.grpextra.Size = New System.Drawing.Size(214, 100)
        Me.grpextra.TabIndex = 4
        Me.grpextra.TabStop = False
        Me.grpextra.Text = "Extras:"
        '
        'chksugar
        '
        Me.chksugar.AutoSize = True
        Me.chksugar.Location = New System.Drawing.Point(7, 19)
        Me.chksugar.Name = "chksugar"
        Me.chksugar.Size = New System.Drawing.Size(54, 17)
        Me.chksugar.TabIndex = 0
        Me.chksugar.Text = "Sugar"
        Me.chksugar.UseVisualStyleBackColor = True
        '
        'chklemon
        '
        Me.chklemon.AutoSize = True
        Me.chklemon.Location = New System.Drawing.Point(7, 42)
        Me.chklemon.Name = "chklemon"
        Me.chklemon.Size = New System.Drawing.Size(58, 17)
        Me.chklemon.TabIndex = 1
        Me.chklemon.Text = "Lemon"
        Me.chklemon.UseVisualStyleBackColor = True
        '
        'chksweetener
        '
        Me.chksweetener.AutoSize = True
        Me.chksweetener.Location = New System.Drawing.Point(94, 20)
        Me.chksweetener.Name = "chksweetener"
        Me.chksweetener.Size = New System.Drawing.Size(77, 17)
        Me.chksweetener.TabIndex = 2
        Me.chksweetener.Text = "Sweetener"
        Me.chksweetener.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(463, 261)
        Me.Controls.Add(Me.grpextra)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.grpdrink)
        Me.Controls.Add(Me.grpdesserts)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.grpdesserts.ResumeLayout(False)
        Me.grpdesserts.PerformLayout()
        Me.grpdrink.ResumeLayout(False)
        Me.grpdrink.PerformLayout()
        Me.grpextra.ResumeLayout(False)
        Me.grpextra.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents radpie As RadioButton
    Friend WithEvents grpdesserts As GroupBox
    Friend WithEvents radicecream As RadioButton
    Friend WithEvents radcake As RadioButton
    Friend WithEvents radcookie As RadioButton
    Friend WithEvents grpdrink As GroupBox
    Friend WithEvents radcoffee As RadioButton
    Friend WithEvents radtea As RadioButton
    Friend WithEvents radsoda As RadioButton
    Friend WithEvents lbloutput As Label
    Friend WithEvents Button1 As Button
    Friend WithEvents grpextra As GroupBox
    Friend WithEvents chksweetener As CheckBox
    Friend WithEvents chklemon As CheckBox
    Friend WithEvents chksugar As CheckBox
End Class
