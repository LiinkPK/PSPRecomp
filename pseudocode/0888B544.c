/* Entry 0x0888B544 | file offset 0x0008851C | FUN_0888b544 | bytes 408 */

void FUN_0888b544(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  
  *(undefined4 *)(param_1 + 0x804) = 0xffffffff;
  switch(*(undefined4 *)(param_1 + 0x4c)) {
  case 0:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
    uVar4 = 0;
    if (DAT_09afd83c != -1) {
      uVar4 = FUN_088bbd8c();
    }
    iVar3 = (int)DAT_09afc900;
    uVar1 = FUN_08889924(param_1);
    uVar4 = func_0x08ade458(auStack_20,iVar3,uVar1,uVar4);
    *(undefined4 *)(param_1 + 0x804) = uVar4;
    break;
  case 1:
  case 2:
  case 3:
  case 0xb:
    if (DAT_09afd83c == -1) {
      *(int *)(param_1 + 0x804) = (int)DAT_09afde4c._2_2_;
    }
    else {
      uVar4 = FUN_088bbd8c();
      uVar4 = func_0x08ade380(auStack_20,uVar4);
      *(undefined4 *)(param_1 + 0x804) = uVar4;
    }
    break;
  case 5:
    iVar3 = (int)(char)DAT_09afb8a0;
    iVar5 = (int)DAT_09afc900;
    uVar4 = FUN_08889924(param_1);
    uVar4 = func_0x08ade4b8(auStack_20,iVar3,iVar5,uVar4);
    *(undefined4 *)(param_1 + 0x804) = uVar4;
    break;
  case 7:
    uVar2 = DAT_09afe05a & 1;
    if (DAT_09afd83c == -1) {
      uVar4 = func_0x08ade42c(auStack_20,(int)DAT_09afc900,uVar2);
      *(undefined4 *)(param_1 + 0x804) = uVar4;
    }
    else {
      uVar4 = FUN_088bbd8c((int)DAT_09afd83c);
      uVar4 = func_0x08ade3cc(auStack_20,uVar4,uVar2);
      *(undefined4 *)(param_1 + 0x804) = uVar4;
    }
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(*(int *)(param_1 + 0x7c8) + 0x22e4);
    break;
  case 0xc:
    *(int *)(param_1 + 0x804) = (int)DAT_09afde4c._2_2_;
  }
  return;
}

