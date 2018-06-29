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
        Me.btnadd = New System.Windows.Forms.Button()
        Me.txtboxname = New System.Windows.Forms.TextBox()
        Me.txtboxnum1 = New System.Windows.Forms.TextBox()
        Me.txtboxnum2 = New System.Windows.Forms.TextBox()
        Me.btnminus = New System.Windows.Forms.Button()
        Me.btntimes = New System.Windows.Forms.Button()
        Me.btndiv = New System.Windows.Forms.Button()
        Me.btnclear = New System.Windows.Forms.Button()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnadd
        '
        Me.btnadd.Location = New System.Drawing.Point(12, 90)
        Me.btnadd.Name = "btnadd"
        Me.btnadd.Size = New System.Drawing.Size(100, 23)
        Me.btnadd.TabIndex = 0
        Me.btnadd.Text = "+"
        Me.btnadd.UseVisualStyleBackColor = True
        '
        'txtboxname
        '
        Me.txtboxname.Location = New System.Drawing.Point(12, 12)
        Me.txtboxname.Name = "txtboxname"
        Me.txtboxname.Size = New System.Drawing.Size(100, 20)
        Me.txtboxname.TabIndex = 1
        Me.txtboxname.Text = "Name"
        '
        'txtboxnum1
        '
        Me.txtboxnum1.Location = New System.Drawing.Point(12, 38)
        Me.txtboxnum1.Name = "txtboxnum1"
        Me.txtboxnum1.Size = New System.Drawing.Size(100, 20)
        Me.txtboxnum1.TabIndex = 2
        Me.txtboxnum1.Text = "A Number"
        '
        'txtboxnum2
        '
        Me.txtboxnum2.Location = New System.Drawing.Point(12, 64)
        Me.txtboxnum2.Name = "txtboxnum2"
        Me.txtboxnum2.Size = New System.Drawing.Size(100, 20)
        Me.txtboxnum2.TabIndex = 3
        Me.txtboxnum2.Text = "Another Number"
        '
        'btnminus
        '
        Me.btnminus.Location = New System.Drawing.Point(12, 119)
        Me.btnminus.Name = "btnminus"
        Me.btnminus.Size = New System.Drawing.Size(100, 23)
        Me.btnminus.TabIndex = 4
        Me.btnminus.Text = "-"
        Me.btnminus.UseVisualStyleBackColor = True
        '
        'btntimes
        '
        Me.btntimes.Location = New System.Drawing.Point(12, 148)
        Me.btntimes.Name = "btntimes"
        Me.btntimes.Size = New System.Drawing.Size(100, 23)
        Me.btntimes.TabIndex = 5
        Me.btntimes.Text = "*"
        Me.btntimes.UseVisualStyleBackColor = True
        '
        'btndiv
        '
        Me.btndiv.Location = New System.Drawing.Point(12, 177)
        Me.btndiv.Name = "btndiv"
        Me.btndiv.Size = New System.Drawing.Size(100, 23)
        Me.btndiv.TabIndex = 6
        Me.btndiv.Text = "/"
        Me.btndiv.UseVisualStyleBackColor = True
        '
        'btnclear
        '
        Me.btnclear.Location = New System.Drawing.Point(12, 206)
        Me.btnclear.Name = "btnclear"
        Me.btnclear.Size = New System.Drawing.Size(100, 23)
        Me.btnclear.TabIndex = 7
        Me.btnclear.Text = "Clear"
        Me.btnclear.UseVisualStyleBackColor = True
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(118, 15)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(10, 13)
        Me.lbloutput.TabIndex = 8
        Me.lbloutput.Text = " "
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(287, 253)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.btnclear)
        Me.Controls.Add(Me.btndiv)
        Me.Controls.Add(Me.btntimes)
        Me.Controls.Add(Me.btnminus)
        Me.Controls.Add(Me.txtboxnum2)
        Me.Controls.Add(Me.txtboxnum1)
        Me.Controls.Add(Me.txtboxname)
        Me.Controls.Add(Me.btnadd)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnadd As Button
    Friend WithEvents txtboxname As TextBox
    Friend WithEvents txtboxnum1 As TextBox
    Friend WithEvents txtboxnum2 As TextBox
    Friend WithEvents btnminus As Button
    Friend WithEvents btntimes As Button
    Friend WithEvents btndiv As Button
    Friend WithEvents btnclear As Button
    Friend WithEvents lbloutput As Label
End Class
