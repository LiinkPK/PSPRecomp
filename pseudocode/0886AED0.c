/* Entry 0x0886AED0 | file offset 0x00067EA8 | FUN_0886aed0 | bytes 700 */

void FUN_0886aed0(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_250 [192];
  undefined1 auStack_190 [80];
  undefined4 local_140 [48];
  undefined4 local_80 [20];
  
  FUN_08870d8c(auStack_250);
  iVar2 = 0;
  iVar3 = 0x18;
  do {
    puVar4 = (undefined4 *)(DAT_089d5ec0 + 0x720 + iVar2);
    uVar5 = puVar4[1];
    *(undefined4 *)((int)local_140 + iVar2) = *puVar4;
    *(undefined4 *)((int)local_140 + iVar2 + 4) = uVar5;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar3 != 0);
  iVar2 = 0;
  iVar3 = 10;
  do {
    puVar4 = (undefined4 *)(DAT_089d5ec0 + 0x7e0 + iVar2);
    uVar5 = puVar4[1];
    *(undefined4 *)((int)local_80 + iVar2) = *puVar4;
    *(undefined4 *)((int)local_80 + iVar2 + 4) = uVar5;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar3 != 0);
  FUN_08873594(param_2,param_3,local_80);
  iVar2 = FUN_08870dbc(auStack_250,local_140,local_80);
  if (iVar2 == 0) {
    FUN_0886accc(param_4,param_5,param_6);
  }
  else {
    FUN_089a0384(3);
    FUN_089a123c(1,0xff,0xff);
    FUN_089a1270(0,0,2);
    FUN_089a0384(10);
    FUN_0899ffc8(1);
    FUN_089a03dc(4);
    FUN_0886accc(param_4,param_5,param_6);
    FUN_0887100c(auStack_250);
    FUN_088710e8(auStack_250);
    param_1 = param_1 * 4.27819e+09;
    if (param_1 < 2.1474836e+09) {
      uVar1 = (uint)param_1;
    }
    else {
      uVar1 = (int)(param_1 - 2.1474836e+09) + 0x80000000;
    }
    uVar5 = FUN_08871208();
    uVar6 = FUN_08871248();
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a03dc(10);
    FUN_089a03dc(1);
    FUN_089a0384(0);
    FUN_089a03dc(3);
    FUN_089a03dc(0x11);
    FUN_089a03dc(7);
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_089a0e60(0,0);
    FUN_089a0e20(0,1);
    FUN_089a0df4(1,1);
    FUN_08866f50(0,0,uVar5,uVar6,0,0,0x1e0,0x110,uVar1 | 0xffffff);
  }
  FUN_088734d4(local_80,2);
  FUN_0885e834(local_140,2);
  FUN_088734d4(auStack_190,2);
  FUN_0885e834(auStack_250,2);
  return;
}

