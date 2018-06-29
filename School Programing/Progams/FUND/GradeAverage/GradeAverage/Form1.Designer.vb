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
        Me.txtboxname = New System.Windows.Forms.TextBox()
        Me.txtboxs1 = New System.Windows.Forms.TextBox()
        Me.txtboxs2 = New System.Windows.Forms.TextBox()
        Me.txtboxs3 = New System.Windows.Forms.TextBox()
        Me.txtboxs4 = New System.Windows.Forms.TextBox()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtboxname
        '
        Me.txtboxname.Location = New System.Drawing.Point(13, 13)
        Me.txtboxname.Name = "txtboxname"
        Me.txtboxname.Size = New System.Drawing.Size(100, 20)
        Me.txtboxname.TabIndex = 0
        Me.txtboxname.Text = "Name"
        '
        'txtboxs1
        '
        Me.txtboxs1.Location = New System.Drawing.Point(13, 39)
        Me.txtboxs1.Name = "txtboxs1"
        Me.txtboxs1.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs1.TabIndex = 1
        Me.txtboxs1.Text = "Score 1"
        '
        'txtboxs2
        '
        Me.txtboxs2.Location = New System.Drawing.Point(119, 39)
        Me.txtboxs2.Name = "txtboxs2"
        Me.txtboxs2.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs2.TabIndex = 2
        Me.txtboxs2.Text = "Score 2"
        '
        'txtboxs3
        '
        Me.txtboxs3.Location = New System.Drawing.Point(13, 65)
        Me.txtboxs3.Name = "txtboxs3"
        Me.txtboxs3.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs3.TabIndex = 3
        Me.txtboxs3.Text = "Score 3"
        '
        'txtboxs4
        '
        Me.txtboxs4.Location = New System.Drawing.Point(119, 65)
        Me.txtboxs4.Name = "txtboxs4"
        Me.txtboxs4.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs4.TabIndex = 4
        Me.txtboxs4.Text = "Score 4"
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(13, 91)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(82, 13)
        Me.lbloutput.TabIndex = 5
        Me.lbloutput.Text = "Grade Average:"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(13, 147)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(75, 23)
        Me.btncalc.TabIndex = 6
        Me.btncalc.Text = "Calaculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(94, 147)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 7
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(229, 182)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.txtboxs4)
        Me.Controls.Add(Me.txtboxs3)
        Me.Controls.Add(Me.txtboxs2)
        Me.Controls.Add(Me.txtboxs1)
        Me.Controls.Add(Me.txtboxname)
        Me.Name = "Form1"
        Me.Text = "Grade Average"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxname As TextBox
    Friend WithEvents txtboxs1 As TextBox
    Friend WithEvents txtboxs2 As TextBox
    Friend WithEvents txtboxs3 As TextBox
    Friend WithEvents txtboxs4 As TextBox
    Friend WithEvents lbloutput As Label
    Friend WithEvents btncalc As Button
    Friend WithEvents btnexit As Button
End Class
