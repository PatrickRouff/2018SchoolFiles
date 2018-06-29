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
        Me.txtbox1 = New System.Windows.Forms.TextBox()
        Me.txtbox2 = New System.Windows.Forms.TextBox()
        Me.lblplus = New System.Windows.Forms.Label()
        Me.lblequals = New System.Windows.Forms.Label()
        Me.lblAnswers = New System.Windows.Forms.Label()
        Me.btnplus = New System.Windows.Forms.Button()
        Me.btnminus = New System.Windows.Forms.Button()
        Me.btntimes = New System.Windows.Forms.Button()
        Me.btndivide = New System.Windows.Forms.Button()
        Me.btnintdiv = New System.Windows.Forms.Button()
        Me.btnmod = New System.Windows.Forms.Button()
        Me.btnpower = New System.Windows.Forms.Button()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'txtbox1
        '
        Me.txtbox1.Location = New System.Drawing.Point(13, 13)
        Me.txtbox1.Name = "txtbox1"
        Me.txtbox1.Size = New System.Drawing.Size(100, 20)
        Me.txtbox1.TabIndex = 0
        '
        'txtbox2
        '
        Me.txtbox2.Location = New System.Drawing.Point(138, 13)
        Me.txtbox2.Name = "txtbox2"
        Me.txtbox2.Size = New System.Drawing.Size(100, 20)
        Me.txtbox2.TabIndex = 1
        '
        'lblplus
        '
        Me.lblplus.AutoSize = True
        Me.lblplus.Location = New System.Drawing.Point(119, 16)
        Me.lblplus.Name = "lblplus"
        Me.lblplus.Size = New System.Drawing.Size(13, 13)
        Me.lblplus.TabIndex = 2
        Me.lblplus.Text = "+"
        '
        'lblequals
        '
        Me.lblequals.AutoSize = True
        Me.lblequals.Location = New System.Drawing.Point(244, 16)
        Me.lblequals.Name = "lblequals"
        Me.lblequals.Size = New System.Drawing.Size(13, 13)
        Me.lblequals.TabIndex = 3
        Me.lblequals.Text = "="
        '
        'lblAnswers
        '
        Me.lblAnswers.AutoSize = True
        Me.lblAnswers.Location = New System.Drawing.Point(263, 16)
        Me.lblAnswers.Name = "lblAnswers"
        Me.lblAnswers.Size = New System.Drawing.Size(68, 13)
        Me.lblAnswers.TabIndex = 4
        Me.lblAnswers.Text = "Answer Here"
        '
        'btnplus
        '
        Me.btnplus.Location = New System.Drawing.Point(12, 39)
        Me.btnplus.Name = "btnplus"
        Me.btnplus.Size = New System.Drawing.Size(75, 23)
        Me.btnplus.TabIndex = 5
        Me.btnplus.Text = "+"
        Me.btnplus.UseVisualStyleBackColor = True
        '
        'btnminus
        '
        Me.btnminus.Location = New System.Drawing.Point(93, 39)
        Me.btnminus.Name = "btnminus"
        Me.btnminus.Size = New System.Drawing.Size(75, 23)
        Me.btnminus.TabIndex = 6
        Me.btnminus.Text = "-"
        Me.btnminus.UseVisualStyleBackColor = True
        '
        'btntimes
        '
        Me.btntimes.Location = New System.Drawing.Point(174, 39)
        Me.btntimes.Name = "btntimes"
        Me.btntimes.Size = New System.Drawing.Size(75, 23)
        Me.btntimes.TabIndex = 7
        Me.btntimes.Text = "x"
        Me.btntimes.UseVisualStyleBackColor = True
        '
        'btndivide
        '
        Me.btndivide.Location = New System.Drawing.Point(255, 39)
        Me.btndivide.Name = "btndivide"
        Me.btndivide.Size = New System.Drawing.Size(75, 23)
        Me.btndivide.TabIndex = 8
        Me.btndivide.Text = "/"
        Me.btndivide.UseVisualStyleBackColor = True
        '
        'btnintdiv
        '
        Me.btnintdiv.Location = New System.Drawing.Point(12, 68)
        Me.btnintdiv.Name = "btnintdiv"
        Me.btnintdiv.Size = New System.Drawing.Size(75, 23)
        Me.btnintdiv.TabIndex = 9
        Me.btnintdiv.Text = "INT/"
        Me.btnintdiv.UseVisualStyleBackColor = True
        '
        'btnmod
        '
        Me.btnmod.Location = New System.Drawing.Point(93, 68)
        Me.btnmod.Name = "btnmod"
        Me.btnmod.Size = New System.Drawing.Size(75, 23)
        Me.btnmod.TabIndex = 10
        Me.btnmod.Text = "MOD"
        Me.btnmod.UseVisualStyleBackColor = True
        '
        'btnpower
        '
        Me.btnpower.Location = New System.Drawing.Point(174, 68)
        Me.btnpower.Name = "btnpower"
        Me.btnpower.Size = New System.Drawing.Size(75, 23)
        Me.btnpower.TabIndex = 11
        Me.btnpower.Text = "^"
        Me.btnpower.UseVisualStyleBackColor = True
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(255, 68)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 12
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(347, 102)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.btnpower)
        Me.Controls.Add(Me.btnmod)
        Me.Controls.Add(Me.btnintdiv)
        Me.Controls.Add(Me.btndivide)
        Me.Controls.Add(Me.btntimes)
        Me.Controls.Add(Me.btnminus)
        Me.Controls.Add(Me.btnplus)
        Me.Controls.Add(Me.lblAnswers)
        Me.Controls.Add(Me.lblequals)
        Me.Controls.Add(Me.lblplus)
        Me.Controls.Add(Me.txtbox2)
        Me.Controls.Add(Me.txtbox1)
        Me.Name = "Form1"
        Me.Text = "Calculator"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents txtbox1 As System.Windows.Forms.TextBox
    Friend WithEvents txtbox2 As System.Windows.Forms.TextBox
    Friend WithEvents lblplus As System.Windows.Forms.Label
    Friend WithEvents lblequals As System.Windows.Forms.Label
    Friend WithEvents lblAnswers As System.Windows.Forms.Label
    Friend WithEvents btnplus As System.Windows.Forms.Button
    Friend WithEvents btnminus As System.Windows.Forms.Button
    Friend WithEvents btntimes As System.Windows.Forms.Button
    Friend WithEvents btndivide As System.Windows.Forms.Button
    Friend WithEvents btnintdiv As System.Windows.Forms.Button
    Friend WithEvents btnmod As System.Windows.Forms.Button
    Friend WithEvents btnpower As System.Windows.Forms.Button
    Friend WithEvents btnexit As Button
End Class
