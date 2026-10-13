/* Entry 0x088DAE0C | file offset 0x000D7DE4 | FUN_088dae0c | bytes 444 */

int FUN_088dae0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_088db10c();
  iVar1 = DAT_089d7830;
  if (*(code **)(DAT_089d7830 + 0x10968) == (code *)0x0) {
    iVar6 = **(int **)(DAT_089d7830 + 0x1095c);
    **(int **)(DAT_089d7830 + 0x1095c) = 0;
    *(undefined4 *)(iVar1 + 0x1095c) = *(undefined4 *)(*(int *)(iVar1 + 0x1095c) + 4);
  }
  else {
    iVar6 = (**(code **)(DAT_089d7830 + 0x10968))();
  }
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  else {
    local_30 = param_2;
    local_2c = param_3;
    FUN_08870b10(param_2,&local_30,&local_2c);
    iVar5 = FUN_088de0e8(iVar6,local_30,local_2c,param_4,param_5,0);
    iVar1 = DAT_089d7830;
    if (iVar5 == 0) {
      if (*(code **)(DAT_089d7830 + 0x1096c) == (code *)0x0) {
        if (**(int **)(DAT_089d7830 + 0x1095c) != 0) {
          for (piVar2 = (int *)(*(int **)(DAT_089d7830 + 0x1095c))[1]; *piVar2 != 0;
              piVar2 = (int *)piVar2[1]) {
          }
        }
        **(int **)(DAT_089d7830 + 0x10960) = iVar6;
        *(undefined4 *)(iVar1 + 0x10960) = *(undefined4 *)(*(int *)(iVar1 + 0x10960) + 4);
      }
      else {
        (**(code **)(DAT_089d7830 + 0x1096c))(iVar6);
      }
    }
    else {
      piVar2 = (int *)(DAT_089d7830 + 0xebc8);
      if (*(int *)(DAT_089d7830 + 0xebcc) == 0) {
        *(int *)(DAT_089d7830 + 0xebcc) = iVar6;
        *piVar2 = iVar6;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x10) = 0;
        iVar3 = *(int *)(iVar1 + 0xebd0);
      }
      else {
        *(int *)(*(int *)(DAT_089d7830 + 0xebcc) + 0xc) = iVar6;
        uVar4 = *(undefined4 *)(iVar1 + 0xebcc);
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x10) = uVar4;
        iVar3 = *(int *)(iVar1 + 0xebd0);
        *(int *)(iVar1 + 0xebcc) = iVar6;
      }
      *(int *)(iVar1 + 0xebd0) = iVar3 + 1;
      *(int *)(param_1 + 0x10) = iVar6;
    }
  }
  return iVar5;
}

