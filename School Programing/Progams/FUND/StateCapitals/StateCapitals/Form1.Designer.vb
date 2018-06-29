<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MainForm
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
        Me.btnAlabama = New System.Windows.Forms.Button()
        Me.btnAlaska = New System.Windows.Forms.Button()
        Me.btnArizona = New System.Windows.Forms.Button()
        Me.btnArkansas = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.lblCapital = New System.Windows.Forms.Label()
        Me.lblOutput = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnAlabama
        '
        Me.btnAlabama.BackgroundImage = Global.StateCapitals.My.Resources.Resources.Alabama
        Me.btnAlabama.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.btnAlabama.Location = New System.Drawing.Point(1, 0)
        Me.btnAlabama.Name = "btnAlabama"
        Me.btnAlabama.Size = New System.Drawing.Size(167, 165)
        Me.btnAlabama.TabIndex = 0
        Me.btnAlabama.Text = "Alabama"
        Me.btnAlabama.UseVisualStyleBackColor = True
        '
        'btnAlaska
        '
        Me.btnAlaska.BackgroundImage = Global.StateCapitals.My.Resources.Resources.alaska
        Me.btnAlaska.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.btnAlaska.Location = New System.Drawing.Point(1, 167)
        Me.btnAlaska.Name = "btnAlaska"
        Me.btnAlaska.Size = New System.Drawing.Size(167, 169)
        Me.btnAlaska.TabIndex = 1
        Me.btnAlaska.Text = "Alaska"
        Me.btnAlaska.UseVisualStyleBackColor = True
        '
        'btnArizona
        '
        Me.btnArizona.BackgroundImage = Global.StateCapitals.My.Resources.Resources.Arizona
        Me.btnArizona.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.btnArizona.Location = New System.Drawing.Point(170, 0)
        Me.btnArizona.Name = "btnArizona"
        Me.btnArizona.Size = New System.Drawing.Size(163, 165)
        Me.btnArizona.TabIndex = 2
        Me.btnArizona.Text = "Arizona"
        Me.btnArizona.UseVisualStyleBackColor = True
        '
        'btnArkansas
        '
        Me.btnArkansas.BackgroundImage = Global.StateCapitals.My.Resources.Resources.arkansas
        Me.btnArkansas.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.btnArkansas.Location = New System.Drawing.Point(170, 167)
        Me.btnArkansas.Name = "btnArkansas"
        Me.btnArkansas.Size = New System.Drawing.Size(163, 169)
        Me.btnArkansas.TabIndex = 3
        Me.btnArkansas.Text = "Arkansas"
        Me.btnArkansas.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(346, 67)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 4
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'lblCapital
        '
        Me.lblCapital.AutoSize = True
        Me.lblCapital.Location = New System.Drawing.Point(343, 9)
        Me.lblCapital.Name = "lblCapital"
        Me.lblCapital.Size = New System.Drawing.Size(42, 13)
        Me.lblCapital.TabIndex = 5
        Me.lblCapital.Text = "Captial:"
        '
        'lblOutput
        '
        Me.lblOutput.AutoSize = True
        Me.lblOutput.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblOutput.Font = New System.Drawing.Font("Microsoft Sans Serif", 11.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblOutput.Location = New System.Drawing.Point(346, 35)
        Me.lblOutput.Name = "lblOutput"
        Me.lblOutput.Size = New System.Drawing.Size(102, 20)
        Me.lblOutput.TabIndex = 6
        Me.lblOutput.Text = "                       "
        '
        'MainForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(455, 337)
        Me.Controls.Add(Me.lblOutput)
        Me.Controls.Add(Me.lblCapital)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnArkansas)
        Me.Controls.Add(Me.btnArizona)
        Me.Controls.Add(Me.btnAlaska)
        Me.Controls.Add(Me.btnAlabama)
        Me.Name = "MainForm"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "State Capitals"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents btnAlabama As System.Windows.Forms.Button
    Friend WithEvents btnAlaska As System.Windows.Forms.Button
    Friend WithEvents btnArizona As System.Windows.Forms.Button
    Friend WithEvents btnArkansas As System.Windows.Forms.Button
    Friend WithEvents btnExit As System.Windows.Forms.Button
    Friend WithEvents lblCapital As System.Windows.Forms.Label
    Friend WithEvents lblOutput As System.Windows.Forms.Label

End Class
