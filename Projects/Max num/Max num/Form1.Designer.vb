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
        Me.LBL1 = New System.Windows.Forms.Label
        Me.TXTBOX = New System.Windows.Forms.TextBox
        Me.TXTBOX2 = New System.Windows.Forms.TextBox
        Me.LBL2 = New System.Windows.Forms.Label
        Me.TXTBOX3 = New System.Windows.Forms.TextBox
        Me.LBL3 = New System.Windows.Forms.Label
        Me.TXTBOX4 = New System.Windows.Forms.TextBox
        Me.Label3 = New System.Windows.Forms.Label
        Me.BTN1 = New System.Windows.Forms.Button
        Me.SuspendLayout()
        '
        'LBL1
        '
        Me.LBL1.AutoSize = True
        Me.LBL1.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LBL1.Location = New System.Drawing.Point(13, 13)
        Me.LBL1.Name = "LBL1"
        Me.LBL1.Size = New System.Drawing.Size(83, 25)
        Me.LBL1.TabIndex = 0
        Me.LBL1.Text = "Enter X"
        '
        'TXTBOX
        '
        Me.TXTBOX.Location = New System.Drawing.Point(95, 13)
        Me.TXTBOX.Name = "TXTBOX"
        Me.TXTBOX.Size = New System.Drawing.Size(177, 20)
        Me.TXTBOX.TabIndex = 1
        '
        'TXTBOX2
        '
        Me.TXTBOX2.Location = New System.Drawing.Point(95, 41)
        Me.TXTBOX2.Name = "TXTBOX2"
        Me.TXTBOX2.Size = New System.Drawing.Size(177, 20)
        Me.TXTBOX2.TabIndex = 3
        '
        'LBL2
        '
        Me.LBL2.AutoSize = True
        Me.LBL2.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LBL2.Location = New System.Drawing.Point(13, 41)
        Me.LBL2.Name = "LBL2"
        Me.LBL2.Size = New System.Drawing.Size(84, 25)
        Me.LBL2.TabIndex = 2
        Me.LBL2.Text = "Enter Y"
        '
        'TXTBOX3
        '
        Me.TXTBOX3.Location = New System.Drawing.Point(95, 69)
        Me.TXTBOX3.Name = "TXTBOX3"
        Me.TXTBOX3.Size = New System.Drawing.Size(177, 20)
        Me.TXTBOX3.TabIndex = 5
        '
        'LBL3
        '
        Me.LBL3.AutoSize = True
        Me.LBL3.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LBL3.Location = New System.Drawing.Point(13, 69)
        Me.LBL3.Name = "LBL3"
        Me.LBL3.Size = New System.Drawing.Size(82, 25)
        Me.LBL3.TabIndex = 4
        Me.LBL3.Text = "Enter Z"
        '
        'TXTBOX4
        '
        Me.TXTBOX4.Location = New System.Drawing.Point(95, 118)
        Me.TXTBOX4.Name = "TXTBOX4"
        Me.TXTBOX4.Size = New System.Drawing.Size(177, 20)
        Me.TXTBOX4.TabIndex = 7
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(13, 118)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(81, 25)
        Me.Label3.TabIndex = 6
        Me.Label3.Text = "Max is:"
        '
        'BTN1
        '
        Me.BTN1.Font = New System.Drawing.Font("Microsoft Sans Serif", 26.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BTN1.Location = New System.Drawing.Point(21, 162)
        Me.BTN1.Name = "BTN1"
        Me.BTN1.Size = New System.Drawing.Size(234, 71)
        Me.BTN1.TabIndex = 8
        Me.BTN1.Text = "Submit"
        Me.BTN1.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.BTN1)
        Me.Controls.Add(Me.TXTBOX4)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.TXTBOX3)
        Me.Controls.Add(Me.LBL3)
        Me.Controls.Add(Me.TXTBOX2)
        Me.Controls.Add(Me.LBL2)
        Me.Controls.Add(Me.TXTBOX)
        Me.Controls.Add(Me.LBL1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents LBL1 As System.Windows.Forms.Label
    Friend WithEvents TXTBOX As System.Windows.Forms.TextBox
    Friend WithEvents TXTBOX2 As System.Windows.Forms.TextBox
    Friend WithEvents LBL2 As System.Windows.Forms.Label
    Friend WithEvents TXTBOX3 As System.Windows.Forms.TextBox
    Friend WithEvents LBL3 As System.Windows.Forms.Label
    Friend WithEvents TXTBOX4 As System.Windows.Forms.TextBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents BTN1 As System.Windows.Forms.Button

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub BTN1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BTN1.Click
        Dim x, y, z As Integer

        x = CInt(TXTBOX.Text)
        y = CInt(TXTBOX2.Text)
        z = CInt(TXTBOX3.Text)
        If y > x And y > z Then
            TXTBOX4.Text = "y is max"
        Else
            If z > x And y < z Then
                TXTBOX4.Text = "z is max"
            Else
                If y < x And x > z Then
                    TXTBOX4.Text = "x is max"
                End If
            End If
        End If
    End Sub
End Class
