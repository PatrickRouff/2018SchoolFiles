<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.radsingle = New System.Windows.Forms.RadioButton()
        Me.grpplan = New System.Windows.Forms.GroupBox()
        Me.radfamily = New System.Windows.Forms.RadioButton()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.chktennis = New System.Windows.Forms.CheckBox()
        Me.chkgolf = New System.Windows.Forms.CheckBox()
        Me.chkswim = New System.Windows.Forms.CheckBox()
        Me.grpextra = New System.Windows.Forms.GroupBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.lblbasic = New System.Windows.Forms.Label()
        Me.lblextra = New System.Windows.Forms.Label()
        Me.lbltotal = New System.Windows.Forms.Label()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.grpplan.SuspendLayout()
        Me.grpextra.SuspendLayout()
        Me.SuspendLayout()
        '
        'radsingle
        '
        Me.radsingle.AutoSize = True
        Me.radsingle.Location = New System.Drawing.Point(6, 19)
        Me.radsingle.Name = "radsingle"
        Me.radsingle.Size = New System.Drawing.Size(54, 17)
        Me.radsingle.TabIndex = 0
        Me.radsingle.TabStop = True
        Me.radsingle.Text = "Single"
        Me.radsingle.UseVisualStyleBackColor = True
        '
        'grpplan
        '
        Me.grpplan.Controls.Add(Me.radfamily)
        Me.grpplan.Controls.Add(Me.radsingle)
        Me.grpplan.Location = New System.Drawing.Point(12, 12)
        Me.grpplan.Name = "grpplan"
        Me.grpplan.Size = New System.Drawing.Size(214, 100)
        Me.grpplan.TabIndex = 1
        Me.grpplan.TabStop = False
        Me.grpplan.Text = "Plans:"
        '
        'radfamily
        '
        Me.radfamily.AutoSize = True
        Me.radfamily.Location = New System.Drawing.Point(6, 42)
        Me.radfamily.Name = "radfamily"
        Me.radfamily.Size = New System.Drawing.Size(54, 17)
        Me.radfamily.TabIndex = 1
        Me.radfamily.TabStop = True
        Me.radfamily.Text = "Family"
        Me.radfamily.UseVisualStyleBackColor = True
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
        'chktennis
        '
        Me.chktennis.AutoSize = True
        Me.chktennis.Location = New System.Drawing.Point(7, 19)
        Me.chktennis.Name = "chktennis"
        Me.chktennis.Size = New System.Drawing.Size(58, 17)
        Me.chktennis.TabIndex = 0
        Me.chktennis.Text = "Tennis"
        Me.chktennis.UseVisualStyleBackColor = True
        '
        'chkgolf
        '
        Me.chkgolf.AutoSize = True
        Me.chkgolf.Location = New System.Drawing.Point(7, 42)
        Me.chkgolf.Name = "chkgolf"
        Me.chkgolf.Size = New System.Drawing.Size(45, 17)
        Me.chkgolf.TabIndex = 1
        Me.chkgolf.Text = "Golf"
        Me.chkgolf.UseVisualStyleBackColor = True
        '
        'chkswim
        '
        Me.chkswim.AutoSize = True
        Me.chkswim.Location = New System.Drawing.Point(7, 65)
        Me.chkswim.Name = "chkswim"
        Me.chkswim.Size = New System.Drawing.Size(51, 17)
        Me.chkswim.TabIndex = 2
        Me.chkswim.Text = "Swim"
        Me.chkswim.UseVisualStyleBackColor = True
        '
        'grpextra
        '
        Me.grpextra.Controls.Add(Me.chkswim)
        Me.grpextra.Controls.Add(Me.chkgolf)
        Me.grpextra.Controls.Add(Me.chktennis)
        Me.grpextra.Location = New System.Drawing.Point(232, 12)
        Me.grpextra.Name = "grpextra"
        Me.grpextra.Size = New System.Drawing.Size(214, 100)
        Me.grpextra.TabIndex = 4
        Me.grpextra.TabStop = False
        Me.grpextra.Text = "Extras:"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(18, 119)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(57, 13)
        Me.Label1.TabIndex = 7
        Me.Label1.Text = "Basic Fee:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(18, 136)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(56, 13)
        Me.Label2.TabIndex = 8
        Me.Label2.Text = "Additional:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(18, 153)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(57, 13)
        Me.Label3.TabIndex = 9
        Me.Label3.Text = "Total Due:"
        '
        'lblbasic
        '
        Me.lblbasic.AutoSize = True
        Me.lblbasic.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblbasic.Location = New System.Drawing.Point(81, 119)
        Me.lblbasic.Name = "lblbasic"
        Me.lblbasic.Size = New System.Drawing.Size(39, 15)
        Me.lblbasic.TabIndex = 10
        Me.lblbasic.Text = "          "
        '
        'lblextra
        '
        Me.lblextra.AutoSize = True
        Me.lblextra.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblextra.Location = New System.Drawing.Point(81, 136)
        Me.lblextra.Name = "lblextra"
        Me.lblextra.Size = New System.Drawing.Size(39, 15)
        Me.lblextra.TabIndex = 11
        Me.lblextra.Text = "          "
        '
        'lbltotal
        '
        Me.lbltotal.AutoSize = True
        Me.lbltotal.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lbltotal.Location = New System.Drawing.Point(81, 153)
        Me.lbltotal.Name = "lbltotal"
        Me.lbltotal.Size = New System.Drawing.Size(39, 15)
        Me.lbltotal.TabIndex = 12
        Me.lbltotal.Text = "          "
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(93, 224)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 13
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(463, 261)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.lbltotal)
        Me.Controls.Add(Me.lblextra)
        Me.Controls.Add(Me.lblbasic)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.grpextra)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.grpplan)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.grpplan.ResumeLayout(False)
        Me.grpplan.PerformLayout()
        Me.grpextra.ResumeLayout(False)
        Me.grpextra.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents radsingle As RadioButton
    Friend WithEvents grpplan As GroupBox
    Friend WithEvents radfamily As RadioButton
    Friend WithEvents Button1 As Button
    Friend WithEvents chktennis As CheckBox
    Friend WithEvents chkgolf As CheckBox
    Friend WithEvents chkswim As CheckBox
    Friend WithEvents grpextra As GroupBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents lblbasic As Label
    Friend WithEvents lblextra As Label
    Friend WithEvents lbltotal As Label
    Friend WithEvents btnexit As Button
End Class
