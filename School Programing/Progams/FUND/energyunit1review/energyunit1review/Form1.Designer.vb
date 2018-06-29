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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.txtboxmass = New System.Windows.Forms.TextBox()
        Me.btncalc = New System.Windows.Forms.Button()
        Me.lblenergy = New System.Windows.Forms.Label()
        Me.lblbulbs = New System.Windows.Forms.Label()
        Me.btnbulb = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtboxmass
        '
        Me.txtboxmass.Location = New System.Drawing.Point(13, 13)
        Me.txtboxmass.Name = "txtboxmass"
        Me.txtboxmass.Size = New System.Drawing.Size(100, 20)
        Me.txtboxmass.TabIndex = 0
        Me.txtboxmass.Text = "Mass"
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(13, 40)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(100, 23)
        Me.btncalc.TabIndex = 1
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'lblenergy
        '
        Me.lblenergy.AutoSize = True
        Me.lblenergy.Location = New System.Drawing.Point(119, 16)
        Me.lblenergy.Name = "lblenergy"
        Me.lblenergy.Size = New System.Drawing.Size(43, 13)
        Me.lblenergy.TabIndex = 2
        Me.lblenergy.Text = "Energy:"
        '
        'lblbulbs
        '
        Me.lblbulbs.AutoSize = True
        Me.lblbulbs.Location = New System.Drawing.Point(119, 45)
        Me.lblbulbs.Name = "lblbulbs"
        Me.lblbulbs.Size = New System.Drawing.Size(36, 13)
        Me.lblbulbs.TabIndex = 3
        Me.lblbulbs.Text = "Bulbs:"
        '
        'btnbulb
        '
        Me.btnbulb.Image = CType(resources.GetObject("btnbulb.Image"), System.Drawing.Image)
        Me.btnbulb.Location = New System.Drawing.Point(13, 69)
        Me.btnbulb.Name = "btnbulb"
        Me.btnbulb.Size = New System.Drawing.Size(220, 239)
        Me.btnbulb.TabIndex = 4
        Me.btnbulb.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(304, 315)
        Me.Controls.Add(Me.btnbulb)
        Me.Controls.Add(Me.lblbulbs)
        Me.Controls.Add(Me.lblenergy)
        Me.Controls.Add(Me.btncalc)
        Me.Controls.Add(Me.txtboxmass)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtboxmass As TextBox
    Friend WithEvents btncalc As Button
    Friend WithEvents lblenergy As Label
    Friend WithEvents lblbulbs As Label
    Friend WithEvents btnbulb As Button
End Class
