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
        Me.txtboxs1 = New System.Windows.Forms.TextBox()
        Me.txtboxs2 = New System.Windows.Forms.TextBox()
        Me.txtboxs3 = New System.Windows.Forms.TextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtboxs1
        '
        Me.txtboxs1.Location = New System.Drawing.Point(12, 12)
        Me.txtboxs1.Name = "txtboxs1"
        Me.txtboxs1.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs1.TabIndex = 0
        Me.txtboxs1.Text = "Side A"
        '
        'txtboxs2
        '
        Me.txtboxs2.Location = New System.Drawing.Point(12, 38)
        Me.txtboxs2.Name = "txtboxs2"
        Me.txtboxs2.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs2.TabIndex = 1
        Me.txtboxs2.Text = "Side B"
        '
        'txtboxs3
        '
        Me.txtboxs3.Location = New System.Drawing.Point(12, 64)
        Me.txtboxs3.Name = "txtboxs3"
        Me.txtboxs3.Size = New System.Drawing.Size(100, 20)
        Me.txtboxs3.TabIndex = 2
        Me.txtboxs3.Text = "Side C"
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(118, 10)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(99, 74)
        Me.Button1.TabIndex = 3
        Me.Button1.Text = "Triangle?"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.Yellow
        Me.ClientSize = New System.Drawing.Size(230, 96)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.txtboxs3)
        Me.Controls.Add(Me.txtboxs2)
        Me.Controls.Add(Me.txtboxs1)
        Me.Name = "Form1"
        Me.Text = "Patrick Rouff 4th"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxs1 As TextBox
    Friend WithEvents txtboxs2 As TextBox
    Friend WithEvents txtboxs3 As TextBox
    Friend WithEvents Button1 As Button
End Class
