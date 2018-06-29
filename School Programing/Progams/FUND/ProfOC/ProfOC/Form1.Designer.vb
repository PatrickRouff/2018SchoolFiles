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
        Me.Label1 = New System.Windows.Forms.Label()
        Me.txtboxs1 = New System.Windows.Forms.TextBox()
        Me.txtboxs2 = New System.Windows.Forms.TextBox()
        Me.txtboxs3 = New System.Windows.Forms.TextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(12, 9)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(100, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Enter Grade Scores"
        '
        'txtboxs1
        '
        Me.txtboxs1.Location = New System.Drawing.Point(13, 26)
        Me.txtboxs1.Name = "txtboxs1"
        Me.txtboxs1.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs1.TabIndex = 1
        Me.txtboxs1.Text = "Score 1"
        '
        'txtboxs2
        '
        Me.txtboxs2.Location = New System.Drawing.Point(13, 52)
        Me.txtboxs2.Name = "txtboxs2"
        Me.txtboxs2.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs2.TabIndex = 2
        Me.txtboxs2.Text = "Score 2"
        '
        'txtboxs3
        '
        Me.txtboxs3.Location = New System.Drawing.Point(13, 78)
        Me.txtboxs3.Name = "txtboxs3"
        Me.txtboxs3.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs3.TabIndex = 3
        Me.txtboxs3.Text = "Score 3"
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(13, 105)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(100, 23)
        Me.Button1.TabIndex = 4
        Me.Button1.Text = "Calculate"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(119, 9)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(10, 13)
        Me.lbloutput.TabIndex = 5
        Me.lbloutput.Text = " "
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.txtboxs3)
        Me.Controls.Add(Me.txtboxs2)
        Me.Controls.Add(Me.txtboxs1)
        Me.Controls.Add(Me.Label1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents txtboxs1 As TextBox
    Friend WithEvents txtboxs2 As TextBox
    Friend WithEvents txtboxs3 As TextBox
    Friend WithEvents Button1 As Button
    Friend WithEvents lbloutput As Label
End Class
