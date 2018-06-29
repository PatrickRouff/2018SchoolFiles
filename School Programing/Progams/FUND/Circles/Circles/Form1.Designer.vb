<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmCircles
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
        Me.txtboxrad = New System.Windows.Forms.TextBox()
        Me.txtboxprice = New System.Windows.Forms.TextBox()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.lbloutput = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'txtboxrad
        '
        Me.txtboxrad.Location = New System.Drawing.Point(13, 13)
        Me.txtboxrad.Name = "txtboxrad"
        Me.txtboxrad.Size = New System.Drawing.Size(100, 20)
        Me.txtboxrad.TabIndex = 0
        Me.txtboxrad.Text = "Radians"
        '
        'txtboxprice
        '
        Me.txtboxprice.Location = New System.Drawing.Point(12, 39)
        Me.txtboxprice.Name = "txtboxprice"
        Me.txtboxprice.Size = New System.Drawing.Size(100, 20)
        Me.txtboxprice.TabIndex = 1
        Me.txtboxprice.Text = "Price per Foot^2"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(12, 66)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(101, 23)
        Me.btncalc.TabIndex = 2
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'lbloutput
        '
        Me.lbloutput.AutoSize = True
        Me.lbloutput.Location = New System.Drawing.Point(119, 16)
        Me.lbloutput.Name = "lbloutput"
        Me.lbloutput.Size = New System.Drawing.Size(42, 13)
        Me.lbloutput.TabIndex = 3
        Me.lbloutput.Text = "Output:"
        '
        'frmCircles
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lbloutput)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.txtboxprice)
        Me.Controls.Add(Me.txtboxrad)
        Me.Name = "frmCircles"
        Me.Text = "Calculate Cost"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxrad As TextBox
    Friend WithEvents txtboxprice As TextBox
    Friend WithEvents btncalc As Button
    Friend WithEvents lbloutput As Label
End Class
