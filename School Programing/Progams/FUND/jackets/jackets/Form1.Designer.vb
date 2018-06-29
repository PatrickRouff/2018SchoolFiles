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
        Me.txtboxorig = New System.Windows.Forms.TextBox()
        Me.lblorig = New System.Windows.Forms.Label()
        Me.lbldiscount = New System.Windows.Forms.Label()
        Me.lblnew = New System.Windows.Forms.Label()
        Me.lbldiscountrate = New System.Windows.Forms.Label()
        Me.lblnewpriceoutput = New System.Windows.Forms.Label()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtboxorig
        '
        Me.txtboxorig.Location = New System.Drawing.Point(87, 12)
        Me.txtboxorig.Name = "txtboxorig"
        Me.txtboxorig.Size = New System.Drawing.Size(100, 20)
        Me.txtboxorig.TabIndex = 0
        '
        'lblorig
        '
        Me.lblorig.AutoSize = True
        Me.lblorig.Location = New System.Drawing.Point(12, 15)
        Me.lblorig.Name = "lblorig"
        Me.lblorig.Size = New System.Drawing.Size(69, 13)
        Me.lblorig.TabIndex = 1
        Me.lblorig.Text = "Original Price"
        '
        'lbldiscount
        '
        Me.lbldiscount.AutoSize = True
        Me.lbldiscount.Location = New System.Drawing.Point(12, 41)
        Me.lbldiscount.Name = "lbldiscount"
        Me.lbldiscount.Size = New System.Drawing.Size(49, 13)
        Me.lbldiscount.TabIndex = 3
        Me.lbldiscount.Text = "Discount"
        '
        'lblnew
        '
        Me.lblnew.AutoSize = True
        Me.lblnew.Location = New System.Drawing.Point(12, 67)
        Me.lblnew.Name = "lblnew"
        Me.lblnew.Size = New System.Drawing.Size(56, 13)
        Me.lblnew.TabIndex = 5
        Me.lblnew.Text = "New Price"
        '
        'lbldiscountrate
        '
        Me.lbldiscountrate.AutoSize = True
        Me.lbldiscountrate.Location = New System.Drawing.Point(84, 41)
        Me.lbldiscountrate.Name = "lbldiscountrate"
        Me.lbldiscountrate.Size = New System.Drawing.Size(44, 13)
        Me.lbldiscountrate.TabIndex = 6
        Me.lbldiscountrate.Text = "25% Off"
        '
        'lblnewpriceoutput
        '
        Me.lblnewpriceoutput.AutoSize = True
        Me.lblnewpriceoutput.Location = New System.Drawing.Point(84, 67)
        Me.lblnewpriceoutput.Name = "lblnewpriceoutput"
        Me.lblnewpriceoutput.Size = New System.Drawing.Size(13, 13)
        Me.lblnewpriceoutput.TabIndex = 7
        Me.lblnewpriceoutput.Text = "$"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(14, 90)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(75, 23)
        Me.btncalc.TabIndex = 8
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(199, 125)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.lblnewpriceoutput)
        Me.Controls.Add(Me.lbldiscountrate)
        Me.Controls.Add(Me.lblnew)
        Me.Controls.Add(Me.lbldiscount)
        Me.Controls.Add(Me.lblorig)
        Me.Controls.Add(Me.txtboxorig)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxorig As TextBox
    Friend WithEvents lblorig As Label
    Friend WithEvents lbldiscount As Label
    Friend WithEvents lblnew As Label
    Friend WithEvents lbldiscountrate As Label
    Friend WithEvents lblnewpriceoutput As Label
    Friend WithEvents btncalc As Button
End Class
