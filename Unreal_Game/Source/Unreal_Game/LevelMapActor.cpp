// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelMapActor.h"

// Sets default values
ALevelMapActor::ALevelMapActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	RootComponent = SceneComponent;

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			//mesh_map[i][j]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		}
	}
}

// Called when the game starts or when spawned
void ALevelMapActor::BeginPlay()
{
	Super::BeginPlay();
	
	createMap();
	decodeMap();


}

// Called every frame
void ALevelMapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelMapActor::createMap()
{
	if (width < 3 || height < 3) {
		
	}
	else if (width > 20 || height > 20) {

	}
	else {
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < height; j++) {
				this->map[i][j] = -1;
			}
		}

		int midWidth = width / 2;
		int midHeight = height / 2;
		if (shape == 0) {
			this->map[midWidth][midHeight] = 0;
			this->map[midWidth + 1][midHeight] = start_percent;
			this->map[midWidth - 1][midHeight] = start_percent;
			this->map[midWidth][midHeight + 1] = start_percent;
			this->map[midWidth][midHeight - 1] = start_percent;
		}
		else if (shape == 1) {
			this->map[midWidth][midHeight] = 0;
			this->map[midWidth + 1][midHeight] = start_percent;
			this->map[midWidth - 1][midHeight] = start_percent;
			this->map[midWidth][midHeight + 1] = start_percent;
			this->map[midWidth][midHeight - 1] = start_percent;
			this->map[midWidth + 1][midHeight + 1] = start_percent;
			this->map[midWidth - 1][midHeight + 1] = start_percent;
			this->map[midWidth - 1][midHeight - 1] = start_percent;
			this->map[midWidth + 1][midHeight - 1] = start_percent;
		}

		int mapFinished = 1;
		while (mapFinished == 1) {
			mapFinished = 0;

			for (int i = 0; i < width; i++) {
				for (int j = 0; j < height; j++) {
					if (this->map[i][j] > 0) {
						mapFinished = 1;

						int random_int = FMath::RandRange(1, 100);
						if (random_int < this->map[i][j]) {
							int random_ext = FMath::RandRange(1, 15);

							if (random_ext == 1) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 2) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 3) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 4) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 5) {
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 6) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 7) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 8) {
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 9) {
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 14) {
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 15) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 10) {
								if (i != 0) {
									if (this->map[i - 1][j] == -1) {
										this->map[i - 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 11) {
								if (j != 0) {
									if (this->map[i][j - 1] == -1) {
										this->map[i][j - 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 12) {
								if (j != height) {
									if (this->map[i][j + 1] == -1) {
										this->map[i][j + 1] = this->map[i][j] - percent_decrease;
									}
								}
							}

							if (random_ext == 13) {
								if (i != width) {
									if (this->map[i + 1][j] == -1) {
										this->map[i + 1][j] = this->map[i][j] - percent_decrease;
									}
								}
							}
						}

						this->map[i][j] = 0;
					}
				}
			}
		}
	}
}

void ALevelMapActor::decodeMap()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (map[i][j] == -1) {
				coded_map[i][j] = "E  ";
			}
			else if (map[i][j] == 0) {
				if (i == 0 && j == 0) {
					if (map[i + 1][j] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "TLC";
					}
					else if (map[i + 1][j] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "BC ";
					}
					else if (map[i + 1][j] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "RC ";
					}
				}
				else if (i == width - 1 && j == 0) {
					if (map[i - 1][j] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "BLC";
					}
					else if (map[i - 1][j] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "TC ";
					}
					else if (map[i - 1][j] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "RC ";
					}
				}
				else if (i == 0 && j == height - 1) {
					if (map[i + 1][j] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "TRC";
					}
					else if (map[i + 1][j] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "BC ";
					}
					else if (map[i + 1][j] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "LC ";
					}
				}
				else if (i == width - 1 && j == height - 1) {
					if (map[i - 1][j] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "BRC";
					}
					else if (map[i - 1][j] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "TC ";
					}
					else if (map[i - 1][j] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "LC ";
					}
				}
				else if (i == 0) {
					if (map[i + 1][j] == 0 && map[i][j - 1] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "TS ";
					}
					else if (map[i + 1][j] == 0 && map[i][j - 1] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "TLC";
					}
					else if (map[i + 1][j] != 0 && map[i][j - 1] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "HT ";
					}
					else if (map[i + 1][j] == 0 && map[i][j - 1] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "TRC";
					}
					else if (map[i + 1][j] != 0 && map[i][j - 1] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "LC ";
					}
					else if (map[i + 1][j] != 0 && map[i][j - 1] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "RC ";
					}
					else if (map[i + 1][j] == 0 && map[i][j - 1] != 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "TC ";
					}
				}
				else if (i == width - 1) {
					if (map[i - 1][j] == 0 && map[i][j - 1] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "BS ";
					}
					else if (map[i - 1][j] == 0 && map[i][j - 1] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "BLC";
					}
					else if (map[i - 1][j] != 0 && map[i][j - 1] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "HT ";
					}
					else if (map[i - 1][j] == 0 && map[i][j - 1] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "BRC";
					}
					else if (map[i - 1][j] != 0 && map[i][j - 1] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "LC ";
					}
					else if (map[i - 1][j] != 0 && map[i][j - 1] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "RC ";
					}
					else if (map[i - 1][j] == 0 && map[i][j - 1] != 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "BC ";
					}
				}
				else if (j == 0) {
					if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "LS ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "TLC";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "BLC";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "VT ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0) {
						coded_map[i][j] = "LC ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "BC ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] != 0) {
						coded_map[i][j] = "TC ";
					}
				}
				else if (j == height - 1) {
					if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "RS ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "TRC";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "BRC";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "VT ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "RC ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "BC ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "TC ";
					}
				}
				else {
					if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "M  ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "BS ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "TS ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "RS ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "LS ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "HT ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "BRC";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "TRC";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "TLC";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "BLC";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "VT ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] != 0 && map[i][j + 1] == 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "LC ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] == 0 && map[i][j + 1] != 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "BC ";
					}
					else if (map[i + 1][j] == 0 && map[i - 1][j] != 0 && map[i][j + 1] != 0 && map[i][j - 1] != 0) {
						coded_map[i][j] = "TC ";
					}
					else if (map[i + 1][j] != 0 && map[i - 1][j] != 0 && map[i][j + 1] != 0 && map[i][j - 1] == 0) {
						coded_map[i][j] = "RC ";
					}
				}
			}
		}
	}
}

void ALevelMapActor::createMeshMap()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (coded_map[i][j] != "E  ") {
				ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Architecture/Floor_400x400.Floor_400x400'"));
				UStaticMesh* tempMesh = MeshAsset.Object;
				mesh_map[i][j] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh" + i + j));
				mesh_map[i][j]->SetStaticMesh(tempMesh);
				mesh_map[i][j]->SetWorldLocation(FVector(i * 5, j * 5, 0.f));
			}
		}
	}
}

