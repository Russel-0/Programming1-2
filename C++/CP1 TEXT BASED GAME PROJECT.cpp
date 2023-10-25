#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
void typewriter(const string& text, unsigned int delay) {
  for (char c : text) {
    cout<<c<< flush;
    this_thread::sleep_for(chrono::milliseconds(delay));
  }
}

int main(){

	int menu, c1, c2, c3, c4, c5, c6, c7, c8, c9;
	int lives = 3;

	cout<<"**************************************************************************************************************\n\n";
	cout<<"                                            	TEXT BASED GAME\n\n\n\n";
	cout<<"LOADING";
	typewriter(" -----------------------------------------------------------------------------------------------------",30);
	system("cls");

	cout<<"**************************************************************************************************************\n\n";
	cout<<"                                               ||FOREST||\n\n\n";
	cout<<"                              [1]START        [2]HOW TO PLAY         [3]EXIT\n\n\n";
	cout<<"**************************************************************************************************************\n\n";
	cout<<"                                             Enter choice: ";
	cin>>menu;

	system("cls");

	for(int n=1; n==1; n++){		
		if(menu==1){
			cout<<"**************************************************************************************************************\n\n";
			typewriter("You got 3 lives to play this game.\n\nSTART\n\n",30);
			system("pause");
			system("cls");
			cout<<"**************************************************************************************************************\n\n";
		   	typewriter("You got a call from your friends. They invited you to go on a road trip with them.\n",30);
			typewriter("You accept it.\n\n",30);
			system("pause");
			system("cls");
			cout<<"**************************************************************************************************************\n\n";
			typewriter("The next day, they said that they were outside your house waiting for you.\n\n",30);
			system("pause");
			system("cls");

				for(int a=1; a==1; a++){
					cout<<"**************************************************************************************************************\n\n";
					typewriter("All of you are now on the road...\n\n",30);
					system("pause");
					system("cls");
					cout<<"**************************************************************************************************************\n\n";
					typewriter("Suddenly your car went off the road... \nAll of you are alive but the night is coming...\n\n",30);
					cout<<"[1]Keep walking [2]Make a campfire\n\n";
					cout<<"Enter choice: ";
					cin>>c1;
					system("cls");

					for(int f=1; f==1; f++){
						if(c1==1){
							cout<<"**************************************************************************************************************\n\n";
							typewriter("There are many different sounds in the forest.\n\n",30);
							cout<<"[1]Keep walking with your friends [2]Enough and make a campfife\n\n";
							cout<<"Enter choice: ";
							cin>>c2;
							system("cls");

							if(c2==1){
								cout<<"**************************************************************************************************************\n\n";
								typewriter("You encountered a wolf...\n\n",30);
								system("pause");
								system("cls");
								cout<<"**************************************************************************************************************\n\n";
								typewriter("During 5 minutes the only noise we could hear \nthe forest was the screams of you and your friends...\n\n",30);
								system("pause");
								system("cls");
								cout<<"**************************************************************************************************************\n\n";
								typewriter("Devoured by wolves...\n\n",30);
								lives--;
								typewriter("Your remaining lives: ",30);
								cout<< lives;

								if(lives!=0){
									cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
									cout<<"Enter choice: ";
									cin>>c3;
									system("cls");

									if(c3==1){
										f--;										
									}else if(c3==2){
										n--;
										lives=3;										
									}else{										
										main();
									}
								}else{
									if(lives==0){
										system("cls");
										cout<<"**************************************************************************************************************\n\n";
										typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
										system("pause");
										system("cls");
										main();
									}
								}
							}else{
								cout<<"**************************************************************************************************************\n\n";
								typewriter("You now create a campfire and all of you are going to sleep...\n",30);
								typewriter("The next day, you woke up and none of your friends were around.\n\n",30);
								cout<<"[1]Find your friends [2]Leave your friends behind and find your way home\n\n";
								cout<<"Enter choice: ";
								cin>>c4;
								system("cls");

								if(c4==1){
									for(int r=1; r==1; r++){
										cout<<"**************************************************************************************************************\n\n";
										typewriter("You found a man with a mask.\n\n",30);
										cout<<"[1]Ask for your friends [2]Trust your instincts, RUN! [3]Take another path just incase.\n\n";
										cout<<"Enter choice: ";
										cin>>c6;
										system("cls");

										for(int i=1; i==1; i++){
											if(c6==1){								
												cout<<"**************************************************************************************************************\n\n";
												typewriter("They hit you in the back of you head...\nYou recovered and run...\n\n",30);
												cout<<"[1]Go straight [2]Go left\n\n";
												cout<<"Enter choice: ";
												cin>>c7;
												system("cls");

												if(c7==1){
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You got killed.\n\n",30);
													lives--;
													typewriter("Your remaining lives: ",30);
													cout<< lives;

													if(lives!=0){
														cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
														cout<<"Enter choice: ";
														cin>>c3;
														system("cls");

														if(c3==1){
															i--;
														}else if(c3==2){
															n--;
															lives=3;
														}else{
															main();
														}
													}else{
														if(lives==0){
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
															system("pause");
															system("cls");
															main();
														}
													}
												}else{
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
													cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
													cout<<"Enter choice: ";
													cin>>c5;
													system("cls");

													if(c5==1){
														cout<<"**************************************************************************************************************\n\n";
														typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
														system("pause");
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
														typewriter("                                              Credits\n",30);
														typewriter("                                            storytellerdz\n\n",30);	
														system("pause");
														system("cls");
														main();								
													}else{
														a--; //mag loop sa nasa road na sila
													}
												}
											}else if(c6==2){
												cout<<"**************************************************************************************************************\n\n";
												typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
												system("pause");
												system("cls");
												cout<<"**************************************************************************************************************\n\n";
												typewriter("You got killed.\n\n",30);
												lives--;
												typewriter("Your remaining lives: ",30);
												cout<< lives;

												if(lives!=0){
													cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
													cout<<"Enter choice: ";
													cin>>c3;
													system("cls");

													if(c3==1){
														r--;
													}else if(c3==2){
														n--;
														lives=3;
													}else{
														main();
													}
												}else{
													if(lives==0){
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
														system("pause");
														system("cls");
														main();
													}
												}
											}else{
												for(int i=1; i==1; i++){
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You found a cave. Your friends might be inside.\n\n",30);
													cout<<"[1]Get in [2]Keep searching around\n\n";
													cout<<"Enter choice: ";
													cin>>c8;
													system("cls");

													if(c8==1){
														cout<<"**************************************************************************************************************\n\n";
														typewriter("You are inside of the cave now.\n\n",30);
														cout<<"[1]Call your friends. [2]They probably not inside go back outside.\n\n";
														cin>>c9;
														system("cls");

														if(c9==1){
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You met a man who lost his mind and was also starving.\n\n",30);
															system("pause");
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You got killed and eaten\n\n",30);
															lives--;
															typewriter("Your remaining lives: ",30);
															cout<< lives;

															if(lives!=0){
																cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
																cout<<"Enter choice: ";
																cin>>c3;
																system("cls");

																if(c3==1){
																	i--;
																}else if(c3==2){
																	n--;
																	lives=3;
																}else{
																	main();
																}
															}else{
																if(lives==0){
																	system("cls");
																	cout<<"**************************************************************************************************************\n\n";
																	typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
																	system("pause");
																	system("cls");
																	main();
																}
															}
														}else{
															cout<<"**************************************************************************************************************\n\n";
															cout<<"[1]Go straight [2]Go left\n\n";
															cout<<"Enter choice: ";
															cin>>c7;
															system("cls");

															if(c7==1){
																cout<<"**************************************************************************************************************\n\n";
																typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
																system("pause");
																system("cls");
																cout<<"**************************************************************************************************************\n\n";
																typewriter("You got killed.\n\n",30);
																lives--;
																typewriter("Your remaining lives: ",30);
																cout<< lives;

																if(lives!=0){
																	cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
																	cout<<"Enter choice: ";
																	cin>>c3;
																	system("cls");

																	if(c3==1){
																		i--;
																	}else if(c3==2){
																		n--;
																		lives=3;
																	}else{
																		main();
																	}
																}else{
																	if(lives==0){
																		system("cls");
																		cout<<"**************************************************************************************************************\n\n";
																		typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
																		system("pause");
																		system("cls");
																		main();
																	}
																}
															}else{
																cout<<"**************************************************************************************************************\n\n";
																typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
																system("pause");
																system("cls");
																cout<<"**************************************************************************************************************\n\n";
																typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
																system("pause");
																system("cls");
																cout<<"**************************************************************************************************************\n\n";
																typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
																cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
																cout<<"Enter choice: ";
																cin>>c5;
																system("cls");

																if(c5==1){
																	cout<<"**************************************************************************************************************\n\n";
																	typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
																	system("pause");
																	system("cls");
																	cout<<"**************************************************************************************************************\n\n";
																	typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
																	typewriter("                                              Credits\n",30);
																	typewriter("                                            storytellerdz\n\n",30);	
																	system("pause");
																	system("cls");
																	main();
																}else{
																	a--; //mag loop sa nasa road na sila
																}
															}
														}
													}else{
														cout<<"**************************************************************************************************************\n\n";
														cout<<"[1]Go straight [2]Go left\n\n";
														cout<<"Enter choice: ";
														cin>>c7;
														system("cls");

														if(c7==1){
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
															system("pause");
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You got killed.\n\n",30);
															lives--;
															typewriter("Your remaining lives: ",30);
															cout<< lives;

															if(lives!=0){
																cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
																cout<<"Enter choice: ";
																cin>>c3;
																system("cls");

																if(c3==1){
																	i--;
																}else if(c3==2){
																	n--;
																	lives;
																}else{
																	main();
																}
															}else{
																if(lives==0){
																	system("cls");
																	cout<<"**************************************************************************************************************\n\n";
																	typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
																	system("pause");
																	system("cls");
																	main();
																}
															}
														}else{
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
															system("pause");
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
															system("pause");
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
															cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
															cout<<"Enter choice: ";
															cin>>c5;
															system("cls");

															if(c5==1){
																cout<<"**************************************************************************************************************\n\n";
																typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
																system("pause");
																system("cls");
																cout<<"**************************************************************************************************************\n\n";
																typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
																typewriter("                                              Credits\n",30);
																typewriter("                                            storytellerdz\n\n",30);	
																system("pause");
																system("cls");
																main();								
															}else{
																a--; //mag loop sa nasa road na sila
															}
														}
													}
												}
											}
										}
									}	
								}else if(c4==2){
									cout<<"**************************************************************************************************************\n\n";
									typewriter("After 5 hours of walk. You found a police officer and went home.\n\n",30);
									typewriter("(I was not expecting you to take this ending. what about your friends?)\n\n",30);
									system("pause");
									system("cls");
									cout<<"**************************************************************************************************************\n\n";
									typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
									system("pause");
									system("cls");
									cout<<"**************************************************************************************************************\n\n";
									typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.
									typewriter("                                              Credits\n",30);
									typewriter("                                            storytellerdz\n\n",30);	
									system("pause");
									system("cls");
									main();
								}
							}
						}else{
							cout<<"**************************************************************************************************************\n\n";						
							typewriter("You now create a campfire and all of you are going to sleep...\n",30);
							typewriter("The next day, you woke up and none of your friends were around.\n\n",30);
							cout<<"[1]Find your friends [2]Leave your friends behind and find your way home\n\n";
							cout<<"Enter choice: ";
							cin>>c4;
							system("cls");

							if(c4==1){
								for(int s=1; s==1; s++){
									cout<<"**************************************************************************************************************\n\n";
									typewriter("You found a man with a mask.\n\n",30);
									cout<<"[1]Ask for your friends [2]Trust your instincts, RUN! [3]Take another path just incase.\n\n";
									cout<<"Enter choice: ";
									cin>>c6;
									system("cls");

									if(c6==1){								
										cout<<"**************************************************************************************************************\n\n";
										typewriter("They hit you in the back of you head...\nYou recovered and run...\n\n",30);
										cout<<"[1]Go straight [2]Go left\n\n";
										cout<<"Enter choice: ";
										cin>>c7;
										system("cls");

										if(c7==1){
											cout<<"**************************************************************************************************************\n\n";
											typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
											system("pause");
											system("cls");
											cout<<"**************************************************************************************************************\n\n";
											typewriter("You got killed.\n\n",30);
											lives--;
											typewriter("Your remaining lives: ",30);
											cout<< lives;

											if(lives!=0){
												cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
												cout<<"Enter choice: ";
												cin>>c3;
												system("cls");

												if(c3==1){
													s--;
												}else if(c3==2){
													n--;
												}else{
													main();
												}
											}else{
												if(lives==0){
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
													system("pause");
													system("cls");
													main();
												}
											}
										}else{
											cout<<"**************************************************************************************************************\n\n";
											typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
											system("pause");
											system("cls");
											cout<<"**************************************************************************************************************\n\n";
											typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
											system("pause");
											system("cls");
											cout<<"**************************************************************************************************************\n\n";
											typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
											cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
											cout<<"Enter choice: ";
											cin>>c5;
											system("cls");

											if(c5==1){
												cout<<"**************************************************************************************************************\n\n";
												typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
												system("pause");
												system("cls");
												cout<<"**************************************************************************************************************\n\n";
												typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
												typewriter("                                              Credits\n",30);
												typewriter("                                            storytellerdz\n\n",30);	
												system("pause");
												system("cls");
												main();									
											}else{
												a--; //mag loop sa nasa road na sila
											}
										}
									}else if(c6==2){
										cout<<"**************************************************************************************************************\n\n";
										typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
										system("pause");
										system("cls");
										cout<<"**************************************************************************************************************\n\n";
										typewriter("You got killed.\n\n",30);
										lives--;
										typewriter("Your remaining lives: ",30);
										cout<< lives;

										if(lives!=0){
											cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
											cout<<"Enter choice: ";
											cin>>c3;
											system("cls");

											if(c3==1){
												s--;
											}else if(c3==2){
												n--;
												lives=3;
											}else{
												main();
											}
										}else{
											if(lives==0){
												system("cls");
												cout<<"**************************************************************************************************************\n\n";
												typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
												system("pause");
												system("cls");
												main();
											}
										}
									}else{
										for(int p=1; p==1; p++){
											cout<<"**************************************************************************************************************\n\n";
											typewriter("You found a cave. Your friends might be inside.\n\n",30);
											cout<<"[1]Get in [2]Keep searching around\n\n";
											cout<<"Enter choice: ";
											cin>>c8;
											system("cls");

											if(c8==1){
												cout<<"**************************************************************************************************************\n\n";
												typewriter("You are inside of the cave now.\n\n",30);
												cout<<"[1]Call your friends. [2]They probably not inside go back outside.\n\n";
												cin>>c9;
												system("cls");

												if(c9==1){
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You met a man who lost his mind and was also starving.\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You got killed and eaten\n\n",30);
													lives--;
													typewriter("Your remaining lives: ",30);
													cout<< lives;

													if(lives!=0){
														cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
														cout<<"Enter choice: ";
														cin>>c3;
														system("cls");

														if(c3==1){
															p--;
														}else if(c3==2){
															n--;
															lives=3;
														}else{
															main();
														}
													}else{
														if(lives==0){
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
															system("pause");
															system("cls");
															main();
														}
													}
												}else{
													cout<<"**************************************************************************************************************\n\n";
													cout<<"[1]Go straight [2]Go left\n\n";
													cout<<"Enter choice: ";
													cin>>c7;
													system("cls");

													if(c7==1){
														cout<<"**************************************************************************************************************\n\n";
														typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
														system("pause");
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("You got killed.\n\n",30);
														lives--;
														typewriter("Your remaining lives: ",30);
														cout<< lives;

														if(lives!=0){
															cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
															cout<<"Enter choice: ";
															cin>>c3;
															system("cls");

															if(c3==1){
																s--;
															}else if(c3==2){
																n--;
																lives=3;
															}else{
																main();
															}
														}else{
															if(lives==0){
																system("cls");
																cout<<"**************************************************************************************************************\n\n";
																typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
																system("pause");
																system("cls");
																main();
															}
														}
													}else{
														cout<<"**************************************************************************************************************\n\n";
														typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
														system("pause");
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
														system("pause");
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
														cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
														cout<<"Enter choice: ";
														cin>>c5;
														system("cls");

														if(c5==1){
															cout<<"**************************************************************************************************************\n\n";
															typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
															system("pause");
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
															typewriter("                                              Credits\n",30);
															typewriter("                                            storytellerdz\n\n",30);	
															system("pause");
															system("cls");
															main();								
														}else{
															a--; //mag loop sa nasa road na sila
														}
													}
												}												
											}else{
												cout<<"**************************************************************************************************************\n\n";
												cout<<"[1]Go straight [2]Go left\n\n";
												cout<<"Enter choice: ";
												cin>>c7;
												system("cls");

												if(c7==1){
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You got spotted by other masked men.\nThere were too many of them.\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You got killed.\n\n",30);
													lives--;
													typewriter("Your remaining lives: ",30);
													cout<< lives;

													if(lives!=0){
														cout<<"\n\nTry again? \n[1]Last save point [2]New game [3]End\n\n";
														cout<<"Enter choice: ";
														cin>>c3;
														system("cls");

														if(c3==1){
															p--;
														}else if(c3==2){
															n--;
															lives=3;
														}else{
															main();
														}
													}else{
														if(lives==0){
															system("cls");
															cout<<"**************************************************************************************************************\n\n";
															typewriter("YOU LOSE!\nYou've run out of life.\n\n",30);
															system("pause");
															system("cls");
															main();
														}
													}
												}else{
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You found a hut.\nYou hide inside but they see you...\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("They hit you multiple time in the head and you fall...\nYou woke up tied in front of a man with a bat in his hand. he walks up to you...\nand raises his bat and you close your eyes...\n\n",30);
													system("pause");
													system("cls");
													cout<<"**************************************************************************************************************\n\n";
													typewriter("You were woken up by the sound of your friends car outside.\nYou was dreaming...\n\n",30);
													cout<<"[1]Stay at home [2]Go on road trip wih your friends\n\n";
													cout<<"Enter choice: ";
													cin>>c5;
													system("cls");

													if(c5==1){
														cout<<"**************************************************************************************************************\n\n";
														typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
														system("pause");
														system("cls");
														cout<<"**************************************************************************************************************\n\n";
														typewriter("End.\n\nThe dream you had was only a vision,\nbut your friends paid the price and went missing taken with guilt.\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.	
														typewriter("                                              Credits\n",30);
														typewriter("                                            storytellerdz\n\n",30);
														system("pause");
														system("cls");
														main();								
													}else{
														a--; //mag loop sa nasa road na sila
													}
												}
											}
										}
									}
								}
							}else if(c4==2){
									cout<<"**************************************************************************************************************\n\n";
									typewriter("After 5 hours of walk. You found a police officer and went home.\n\n",30);
									typewriter("(I was not expecting you to take this ending. what about your friends?)\n\n",30);
									system("pause");
									system("cls");
									cout<<"**************************************************************************************************************\n\n";
									typewriter("Breaking news! your friends had an accident on the road and were not found.\n\n",30);
									system("pause");
									system("cls");
									cout<<"**************************************************************************************************************\n\n";
									typewriter("End.\n\nYou plan to find them in the next episode!!!\n\n",30); //End of the game.
									typewriter("                                              Credits\n",30);
									typewriter("                                            storytellerdz\n\n",30);	
									system("pause");
									system("cls");
									main();
							}
						}		
					}
				}
		}else if(menu==2){
			cout<<"**************************************************************************************************************\n\n";
			cout<<"Choose a number from the choices below. Your fate depends on your decision.\n";
			cout<<"You have three lives to play this game. When you die, your life decreases.\n\n";
			cout<<"Press Enter to go back in the menu.\n\n";
			cout<<"**************************************************************************************************************\n\n";
			system("pause");
			system("cls");
			main();
		}else{
			//exit - end of the program
		}
	}	
}