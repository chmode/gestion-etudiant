Module Module1

    Sub Main()
        Dim etu(9) As String
        Dim notes(9, 3) As double
        Dim rm(9, 1) As String
        Dim choix As Integer
        Dim etudcounter As Integer = 0
        Dim nbrdesetu As Integer

        Dim etudmodifi, etudsup As String

        Dim modifichoix As Integer = 0
        Dim notfound As Integer = 0

        Dim foundsup As Integer = 0
        Dim nouvellenomdijaexiste As String 

        Dim tempchar As String
        Dim tempnum As double
            '*****************************************
             For ends2 As Integer = 1 To 20
                    Console.Clear()
                    Console.Write(" chargement: "&(ends2*5)&"% ")
                     For time As Integer = 1 to 33333333

                     Next
             Next
                  Console.WriteLine()
                  Console.WriteLine()
                  Console.WriteLine("   appuyer sur entry.")
                  Console.ReadLine()
            '*******************************************




        While (1)
            Do
                choix = 0
                Console.Clear()
                Console.WriteLine()
                Console.WriteLine("     taper 1 pour ajouter un etudiant.")
                Console.WriteLine("     taper 2 pour ajouter plusieurs d'etudiant.")
                Console.WriteLine("     taper 3 pour modifier un etudiant.")
                Console.WriteLine("     taper 4 pour supprimer un etudiant.")
                Console.WriteLine("     taper 5 pour afficher la liste des etudiant.")
                Console.WriteLine("     taper 6 pour quitter.")
                choix = Console.ReadLine()
            Loop While choix < 1 Or choix > 6

            Select Case choix
                Case Is = 1
                    Console.Clear()
                    If (etudcounter  >= 10 ) Then
                        Console.WriteLine()
                        Console.WriteLine("     Pas d'espase!!!")
                    Else
                        Console.WriteLine()
                        Console.WriteLine("Donner le nom d'etudiant: "&(etudcounter+1))
                        etu(etudcounter) = Console.ReadLine()

                        If(etudcounter<>0) Then
                             For exist As Integer =0 To etudcounter-1

                                 If (etu(exist)=etu(etudcounter))   Then
                                    console.writeLine(" Deja existe... " &(etu(etudcounter)))
                                    console.ReadLine()
                                    Exit Select     
                                 End if

                             next
                        End if    

                        For inot As Integer = 0 To 2
                            do
                                Console.WriteLine("Donner la note: " & (inot + 1)&":")
                                notes(etudcounter, inot) = Console.ReadLine()
                            Loop While notes(etudcounter, inot) <0 Or notes(etudcounter, inot)>20
                                notes(etudcounter, inot) =Math.Round(notes(etudcounter, inot), 2)
                        Next

                        notes(etudcounter, 3) = 0
                        For inot As Integer = 0 To 2
                            notes(etudcounter, 3) = notes(etudcounter, 3) + notes(etudcounter, inot)
                        Next
                        notes(etudcounter, 3) = Math.Round(notes(etudcounter, 3) / 3, 2)

                        Console.WriteLine("Donner la remarque pore: " & (etu(etudcounter)))
                        rm(etudcounter, 0) = Console.ReadLine()

                        If (notes(etudcounter, 3) >= 10) Then
                            rm(etudcounter, 1) = "Admi"
                        Else
                            rm(etudcounter, 1) = "Pas admi"
                        End If
                        etudcounter = etudcounter + 1
                        Console.WriteLine()
                    End If
                    console.readline()


                Case Is = 2
                    Console.Clear()
                    Console.WriteLine()
                    Console.WriteLine("Donner le nombre des etudiants: ")
                    nbrdesetu = Console.ReadLine()
                    If (nbrdesetu + etudcounter  > 10) Then
                        Console.WriteLine()
                        Console.WriteLine("     Pas d'espase!!!")
                    Else
                        For ietud As Integer = 0 To nbrdesetu - 1
                            Console.WriteLine()
                            Console.WriteLine("Donner le nom d'etudiant: "&(etudcounter+1))
                            etu(etudcounter) = Console.ReadLine()

                        If(etudcounter<>0) Then
                             For exist As Integer =0 To etudcounter-1

                                 If (etu(exist)=etu(etudcounter))   Then
                                    console.writeLine(" Deja existe... " &(etu(etudcounter)))
                                    console.ReadLine()
                                    Exit Select     
                                 End if

                             next
                        End if   


                            For inot As Integer = 0 To 2
                                do
                                    Console.WriteLine("Donner la note: " & (inot + 1)&":")
                                    notes(etudcounter, inot) = Console.ReadLine()
                                loop while notes(etudcounter, inot)<0 Or notes(etudcounter, inot)>20
                                    notes(etudcounter, inot) =Math.Round(notes(etudcounter, inot), 2)
                            Next

                            notes(etudcounter, 3) = 0
                            For inot As Integer = 0 To 2
                                notes(etudcounter, 3) = notes(etudcounter, 3) + notes(etudcounter, inot)
                            Next
                            notes(etudcounter, 3) = notes(etudcounter, 3) / 3
                            notes(etudcounter, 3)=Math.Round(notes(etudcounter, 3), 2)

                            Console.WriteLine("Donner la remarque pour: " & (etu(etudcounter)))
                            rm(etudcounter, 0) = Console.ReadLine()

                            If (notes(etudcounter, 3) >= 10) Then
                                rm(etudcounter, 1) = "Admi"
                            Else
                                rm(etudcounter, 1) = "Pas admi"
                            End If
                            etudcounter = etudcounter + 1
                            Console.WriteLine()
                        Next
                    End If
                    console.readline()

                Case Is = 3
                    Console.Clear()
                    notfound = 0
                    Console.WriteLine()

                    If(etudcounter=0) Then
                        Console.WriteLine(" la liste est vide!!!")
                        Console.ReadLine()
                        Exit Select
                    Else
                         For ishow As Integer = 0 To etudcounter - 1
                            Console.WriteLine()
                            Console.WriteLine("  **********************")
                            Console.WriteLine("  le nom d'etudiant est: " & (etu(0 + ishow)))
                            Console.WriteLine("  le moyen d'etudiant est: " & (notes(0 + ishow, 3)))
                            Console.WriteLine("  le remarque est: " & (rm(0 + ishow, 0)))
                            Console.WriteLine("  admi ou non: " & (rm(0 + ishow, 1)))
                            Console.WriteLine("  ************")
                          
                         Next

                    End If

                    Console.WriteLine("Donner le nom de l'etudiant a modifier: ")
                    etudmodifi = Console.ReadLine()

                    For found As Integer = 0 To etudcounter
                        If (etu(found) = etudmodifi) Then
                            Do
                                Do
                                    modifichoix = 0
                                    Console.Clear()
                                    Console.WriteLine()
                                    Console.WriteLine("*****l'etudiant: "&(etu(found))&" /la note 1: "&(notes(found, 0))&" /la note 2: "&(notes(found, 1))&" /la note 3: "&(notes(found, 2))&" /la remarque: "&(rm(found, 0)))
                                    Console.WriteLine()
                                    Console.WriteLine("     taper 1 pour modifier le nom.")
                                    Console.WriteLine("     taper 2 pour modifier la remarque.")
                                    Console.WriteLine("     taper 3 pour modifier les notes.")
                                    Console.WriteLine("     taper 4 pour quitter.")
                                    modifichoix = Console.ReadLine()
                                    Console.Clear()
                                Loop While modifichoix < 1 Or modifichoix > 4

                                Select Case modifichoix
                                    Case Is = 1
                                        Console.WriteLine() 
                                        Console.WriteLine("donne la nouvelle nom: ")
                                        nouvellenomdijaexiste= Console.ReadLine()

                                                If(etudcounter<>0) Then
                                                     For exist As Integer =0 To etudcounter-1

                                                         If (etu(exist)=nouvellenomdijaexiste)   Then
                                                            console.writeLine(" Deja existe... " &(nouvellenomdijaexiste))
                                                            console.ReadLine()
                                                            Exit Select 
                                                         else
                                                            Console.WriteLine(("    "&etu(found))&" --------> "&(nouvellenomdijaexiste))
                                                            etu(found)=nouvellenomdijaexiste
                                                            console.ReadLine()
                                                            Exit for
                                                         End if

                                                     next
                                                End if

                                    Case Is = 2
                                        Console.WriteLine()
                                        Console.WriteLine("donne la nouvelle remarque: ") 
                                        tempchar= Console.ReadLine()
                                        Console.WriteLine(("    "&rm(found, 0))&" --------> "&(tempchar))
                                        rm(found, 0)=tempchar
                                        console.ReadLine()
                                    Case Is = 3
                                        Console.WriteLine()
                                        For foundnot As Integer = 0 To 2
                                            do
                                                Console.WriteLine("donne la nouvelle note numero " & (foundnot + 1)&":")
                                                tempnum= Console.ReadLine()
                                            Loop While tempnum <0 Or tempnum >20
                                                Console.WriteLine(("    "&notes(found, foundnot))&" --------> "&(Math.Round(tempnum, 2)))
                                                notes(found, foundnot) =Math.Round(tempnum, 2)
                                                console.ReadLine()
                                        Next
                                        notes(found, 3) = 0
                                        For inotfound As Integer = 0 To 2
                                            notes(found, 3) = notes(found, 3) + notes(found, inotfound)
                                        Next
                                        notes(found, 3) = Math.Round(notes(found, 3) / 3, 2)

                                        If (notes(found, 3) >= 10) Then
                                            rm(found, 1) = "Admi"
                                        Else
                                            rm(found, 1) = "Pas admi"
                                        End If

                                End Select
                                notfound = 1
                            Loop While modifichoix <> 4
                            Exit For
                        End If

                    Next
                    If (notfound = 0 And etudcounter <> 0) Then
                        Console.WriteLine(" Pas de: " & (etudmodifi))
                        Console.ReadLine()
                    End If

                Case Is = 4
                    Console.Clear()

                    If(etudcounter=0) Then
                        Console.WriteLine(" la liste est vide!!!")
                        Console.ReadLine()
                        Exit Select
                    Else
                         For ishow As Integer = 0 To etudcounter - 1
                            Console.WriteLine()
                            Console.WriteLine("  **********************")
                            Console.WriteLine("  le nom d'etudiant est: " & (etu(0 + ishow)))
                            Console.WriteLine("  le moyen d'etudiant est: " & (notes(0 + ishow, 3)))
                            Console.WriteLine("  le remarque est: " & (rm(0 + ishow, 0)))
                            Console.WriteLine("  admi ou non: " & (rm(0 + ishow, 1)))
                            Console.WriteLine("  ************")
                          
                         Next

                    End If
                    notfound = 0
                    Console.WriteLine("Donner le nom de l'etudiant a supprimer: ")
                    etudsup = Console.ReadLine()
                    For found As Integer = 0 To etudcounter
                        If (etu(found) = etudsup) Then
                            foundsup = found
                            notfound = 1
                            Exit For
                        End If
                    Next
                    If (notfound = 1) Then

                        If (etudcounter = 1 Or etudcounter = 0) Then
                            etu(foundsup) = "0"

                            For inot As Integer = 0 To 3
                                notes(foundsup, inot) = 0
                            Next

                            rm(foundsup, 0) = 0
                            rm(foundsup, 1) = 0
                            etudcounter = 0
                            Console.WriteLine(" supprision sucsese...")
                            Console.ReadLine()
                        ElseIf (foundsup = etudcounter - 1) Then
                            etudcounter = etudcounter - 1
                            Console.WriteLine(" supprision sucsese...")
                            Console.ReadLine()
                        Else
                            For replace As Integer = foundsup To etudcounter - 1
                                etu(replace) = etu(replace + 1)

                                For inot As Integer = 0 To 3
                                    notes(replace, inot) = notes(replace + 1, inot)
                                Next

                                rm(replace, 0) = rm(replace + 1, 0)
                                rm(replace, 1) = rm(replace + 1, 1)
                            Next
                            etudcounter = etudcounter - 1
                            Console.WriteLine(" supprision sucsese...")
                            Console.ReadLine()

                        End If

                    Else
                        If (notfound = 0 And etudcounter = 0) Then
                            Console.WriteLine()
                            Console.WriteLine(" la liste est vide!!!")
                            Console.ReadLine()
                        Else
                            Console.WriteLine(" pas de: " & (etudsup))
                            Console.ReadLine()
                        End If

                    End If



                        Case Is = 5
                    Console.Clear()
                    If(etudcounter=0) Then
                       Console.WriteLine(" la liste est vide!!!")
                    Else
                         For ishow As Integer = 0 To etudcounter - 1
                            Console.WriteLine()
                            Console.WriteLine("  **********************")
                            Console.WriteLine("  le nom d'etudiant est: " & (etu(0 + ishow)))
                            Console.WriteLine("  le moyen d'etudiant est: " & (notes(0 + ishow, 3)))
                            Console.WriteLine("  le remarque est: " & (rm(0 + ishow, 0)))
                            Console.WriteLine("  admi ou non: " & (rm(0 + ishow, 1)))
                            Console.WriteLine("  ************")
                          
                         Next

                    End If
                    console.readline()
                Case Is = 6
                    Console.Clear()
                        '***********************************************
                        For ends2 As Integer = 1 To 5
                            Console.Clear()
                            Console.Write(" chargement: "&(ends2*20)&"% ")
                            For time As Integer = 1 to 99999999

                            Next
                        Next
                       '************************************************
                    Console.WriteLine()
                    Console.WriteLine()
                    Console.WriteLine("     -------->GOOD BY<--------")
                    Console.ReadLine()


                    Exit While

            End Select


        End While



    End Sub

End Module
