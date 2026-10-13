/* Entry 0x0898F2A8 | file offset 0x0018C280 | FUN_0898f2a8 | bytes 112 */

void FUN_0898f2a8(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  
  if ((*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) &&
     (pcVar2 = *(code **)(param_1 + 0xc), pcVar2 != (code *)0x0)) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + 1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(DAT_09b6f478,param_2,iVar1,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

