/* Entry 0x0881081C | file offset 0x0000D7F4 | FUN_0881081c | bytes 328 */

undefined4 FUN_0881081c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = FUN_08810a88(param_2,4);
    if (iVar1 == 0) {
      uVar4 = 0xfffffffe;
    }
    else {
      puVar2 = (undefined4 *)FUN_08810a88(param_2,4);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0xfffffffd;
      }
      else {
        *(undefined4 *)(param_1 + 8) = *puVar2;
        piVar3 = (int *)FUN_08810a88(param_2,4);
        if (piVar3 == (int *)0x0) {
          iVar1 = -2;
        }
        else {
          iVar1 = *piVar3;
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 < 0) {
            iVar1 = -3;
          }
          else {
            iVar1 = FUN_08810a88(param_2,iVar1 * 0x1c);
            *(int *)(param_1 + 0x10) = iVar1;
            if (iVar1 == 0) {
              iVar1 = -4;
            }
            else {
              iVar1 = 0;
            }
          }
        }
        if (iVar1 == 0) {
          piVar3 = (int *)FUN_08810a88(param_2,4);
          if (piVar3 == (int *)0x0) {
            iVar1 = -2;
          }
          else {
            iVar1 = *piVar3;
            *(int *)(param_1 + 0x18) = iVar1;
            if (iVar1 < 0) {
              iVar1 = -3;
            }
            else {
              iVar1 = FUN_08810a88(param_2,iVar1);
              *(int *)(param_1 + 0x1c) = iVar1;
              if (iVar1 == 0) {
                iVar1 = -4;
              }
              else {
                iVar1 = 0;
              }
            }
          }
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0xfffffffb;
          }
        }
        else {
          uVar4 = 0xfffffffc;
        }
      }
    }
  }
  return uVar4;
}

