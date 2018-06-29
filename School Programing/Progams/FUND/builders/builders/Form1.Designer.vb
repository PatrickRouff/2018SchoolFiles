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
        Me.txtboxdiam = New System.Windows.Forms.TextBox()
        Me.txtboxprice = New System.Windows.Forms.TextBox()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.lblcircum = New System.Windows.Forms.Label()
        Me.lblprice = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'txtboxdiam
        '
        Me.txtboxdiam.Location = New System.Drawing.Point(12, 12)
        Me.txtboxdiam.Name = "txtboxdiam"
        Me.txtboxdiam.Size = New System.Drawing.Size(100, 20)
        Me.txtboxdiam.TabIndex = 0
        Me.txtboxdiam.Text = "Diameter (feet) "
        '
        'txtboxprice
        '
        Me.txtboxprice.Location = New System.Drawing.Point(139, 12)
        Me.txtboxprice.Name = "txtboxprice"
        Me.txtboxprice.Size = New System.Drawing.Size(100, 20)
        Me.txtboxprice.TabIndex = 1
        Me.txtboxprice.Text = "Price"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(12, 51)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(100, 23)
        Me.btncalc.TabIndex = 4
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(139, 51)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(100, 23)
        Me.btnexit.TabIndex = 5
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'lblcircum
        '
        Me.lblcircum.AutoSize = True
        Me.lblcircum.Location = New System.Drawing.Point(9, 35)
        Me.lblcircum.Name = "lblcircum"
        Me.lblcircum.Size = New System.Drawing.Size(78, 13)
        Me.lblcircum.TabIndex = 6
        Me.lblcircum.Text = "Circumference:"
        '
        'lblprice
        '
        Me.lblprice.AutoSize = True
        Me.lblprice.Location = New System.Drawing.Point(136, 35)
        Me.lblprice.Name = "lblprice"
        Me.lblprice.Size = New System.Drawing.Size(34, 13)
        Me.lblprice.TabIndex = 7
        Me.lblprice.Text = "Price:"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lblprice)
        Me.Controls.Add(Me.lblcircum)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.txtboxprice)
        Me.Controls.Add(Me.txtboxdiam)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxdiam As TextBox
    Friend WithEvents txtboxprice As TextBox
    Friend WithEvents btncalc As Button
    Friend WithEvents btnexit As Button
    Friend WithEvents lblcircum As Label
    Friend WithEvents lblprice As Label
End Class
