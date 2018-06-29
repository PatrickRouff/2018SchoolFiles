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
        Me.components = New System.ComponentModel.Container()
        Me.picbox1 = New System.Windows.Forms.PictureBox()
        Me.picbox2 = New System.Windows.Forms.PictureBox()
        Me.picbox3 = New System.Windows.Forms.PictureBox()
        Me.btnpull1 = New System.Windows.Forms.Button()
        Me.btnpull2 = New System.Windows.Forms.Button()
        Me.btnpull3 = New System.Windows.Forms.Button()
        Me.btnstop1 = New System.Windows.Forms.Button()
        Me.btnstop2 = New System.Windows.Forms.Button()
        Me.btnstop3 = New System.Windows.Forms.Button()
        Me.btnprize = New System.Windows.Forms.Button()
        Me.Timer1 = New System.Windows.Forms.Timer(Me.components)
        Me.Timer2 = New System.Windows.Forms.Timer(Me.components)
        Me.Timer3 = New System.Windows.Forms.Timer(Me.components)
        Me.Timer4 = New System.Windows.Forms.Timer(Me.components)
        CType(Me.picbox1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picbox2, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picbox3, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'picbox1
        '
        Me.picbox1.Image = Global.slotmachine.My.Resources.Resources.smiley_face
        Me.picbox1.Location = New System.Drawing.Point(12, 12)
        Me.picbox1.Name = "picbox1"
        Me.picbox1.Size = New System.Drawing.Size(100, 100)
        Me.picbox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize
        Me.picbox1.TabIndex = 0
        Me.picbox1.TabStop = False
        '
        'picbox2
        '
        Me.picbox2.Image = Global.slotmachine.My.Resources.Resources.smiley_face
        Me.picbox2.Location = New System.Drawing.Point(118, 12)
        Me.picbox2.Name = "picbox2"
        Me.picbox2.Size = New System.Drawing.Size(100, 100)
        Me.picbox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize
        Me.picbox2.TabIndex = 1
        Me.picbox2.TabStop = False
        '
        'picbox3
        '
        Me.picbox3.Image = Global.slotmachine.My.Resources.Resources.smiley_face
        Me.picbox3.Location = New System.Drawing.Point(224, 12)
        Me.picbox3.Name = "picbox3"
        Me.picbox3.Size = New System.Drawing.Size(100, 100)
        Me.picbox3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize
        Me.picbox3.TabIndex = 2
        Me.picbox3.TabStop = False
        '
        'btnpull1
        '
        Me.btnpull1.Location = New System.Drawing.Point(12, 118)
        Me.btnpull1.Name = "btnpull1"
        Me.btnpull1.Size = New System.Drawing.Size(100, 23)
        Me.btnpull1.TabIndex = 3
        Me.btnpull1.Text = "Pull"
        Me.btnpull1.UseVisualStyleBackColor = True
        '
        'btnpull2
        '
        Me.btnpull2.Location = New System.Drawing.Point(118, 118)
        Me.btnpull2.Name = "btnpull2"
        Me.btnpull2.Size = New System.Drawing.Size(100, 23)
        Me.btnpull2.TabIndex = 4
        Me.btnpull2.Text = "Pull"
        Me.btnpull2.UseVisualStyleBackColor = True
        '
        'btnpull3
        '
        Me.btnpull3.Location = New System.Drawing.Point(224, 118)
        Me.btnpull3.Name = "btnpull3"
        Me.btnpull3.Size = New System.Drawing.Size(100, 23)
        Me.btnpull3.TabIndex = 5
        Me.btnpull3.Text = "Pull"
        Me.btnpull3.UseVisualStyleBackColor = True
        '
        'btnstop1
        '
        Me.btnstop1.Location = New System.Drawing.Point(12, 147)
        Me.btnstop1.Name = "btnstop1"
        Me.btnstop1.Size = New System.Drawing.Size(100, 23)
        Me.btnstop1.TabIndex = 6
        Me.btnstop1.Text = "Stop"
        Me.btnstop1.UseVisualStyleBackColor = True
        '
        'btnstop2
        '
        Me.btnstop2.Location = New System.Drawing.Point(118, 147)
        Me.btnstop2.Name = "btnstop2"
        Me.btnstop2.Size = New System.Drawing.Size(100, 23)
        Me.btnstop2.TabIndex = 7
        Me.btnstop2.Text = "Stop"
        Me.btnstop2.UseVisualStyleBackColor = True
        '
        'btnstop3
        '
        Me.btnstop3.Location = New System.Drawing.Point(224, 147)
        Me.btnstop3.Name = "btnstop3"
        Me.btnstop3.Size = New System.Drawing.Size(100, 23)
        Me.btnstop3.TabIndex = 8
        Me.btnstop3.Text = "Stop"
        Me.btnstop3.UseVisualStyleBackColor = True
        '
        'btnprize
        '
        Me.btnprize.Location = New System.Drawing.Point(66, 176)
        Me.btnprize.Name = "btnprize"
        Me.btnprize.Size = New System.Drawing.Size(206, 52)
        Me.btnprize.TabIndex = 9
        Me.btnprize.Text = "What is your prize?"
        Me.btnprize.UseVisualStyleBackColor = True
        Me.btnprize.Visible = False
        '
        'Timer1
        '
        '
        'Timer2
        '
        '
        'Timer3
        '
        '
        'Timer4
        '
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(338, 241)
        Me.Controls.Add(Me.btnprize)
        Me.Controls.Add(Me.btnstop3)
        Me.Controls.Add(Me.btnstop2)
        Me.Controls.Add(Me.btnstop1)
        Me.Controls.Add(Me.btnpull3)
        Me.Controls.Add(Me.btnpull2)
        Me.Controls.Add(Me.btnpull1)
        Me.Controls.Add(Me.picbox3)
        Me.Controls.Add(Me.picbox2)
        Me.Controls.Add(Me.picbox1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        CType(Me.picbox1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picbox2, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picbox3, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents picbox1 As PictureBox
    Friend WithEvents picbox2 As PictureBox
    Friend WithEvents picbox3 As PictureBox
    Friend WithEvents btnpull1 As Button
    Friend WithEvents btnpull2 As Button
    Friend WithEvents btnpull3 As Button
    Friend WithEvents btnstop1 As Button
    Friend WithEvents btnstop2 As Button
    Friend WithEvents btnstop3 As Button
    Friend WithEvents btnprize As Button
    Friend WithEvents Timer1 As Timer
    Friend WithEvents Timer2 As Timer
    Friend WithEvents Timer3 As Timer
    Friend WithEvents Timer4 As Timer
End Class
