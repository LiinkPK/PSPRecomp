/* Entry 0x0881A798 | file offset 0x00017770 | FUN_0881a798 | bytes 412 */

void FUN_0881a798(int param_1,uint param_2,uint param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_3 = param_3 & 0xff;
  if (param_2 < *(uint *)(param_1 + 4)) {
    uVar1 = FUN_0881baa8();
    uVar3 = DAT_089d4910;
    if ((param_3 == 0) && (param_5 == '\x01')) {
      FUN_0881bf68(uVar1,param_2);
    }
    if (*(uint *)(*(int *)(param_1 + 8) + param_2 * 4) != param_3) {
      iVar2 = FUN_0881e6f8(uVar3,param_2);
      if (iVar2 == 0) {
        uVar3 = FUN_08899300();
        FUN_088981b4(uVar3,param_2,param_3,1);
        FUN_0881a2fc(param_1,param_2,param_3,param_4);
      }
      else if (param_3 == 1) {
        if (param_4 == '\x01') {
          FUN_0881bc9c(uVar1,param_2,0x3f2);
        }
        else {
          FUN_0881bd58(uVar1,param_2);
        }
      }
      else if (param_4 == '\x01') {
        FUN_0881baf8(uVar1,param_2,1,0,1,1000,1);
      }
      else {
        FUN_0881bbf4(uVar1,param_2);
      }
    }
  }
  return;
}

