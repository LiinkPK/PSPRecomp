/* Entry 0x0880ABF4 | file offset 0x00007BCC | FUN_0880abf4 | bytes 144 */

void FUN_0880abf4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_089d4770;
  if (param_1 != 0) {
    if ((DAT_089d4770 != 0) && (DAT_089d4774 != 0)) {
      iVar3 = *(int *)(param_1 + 0x78);
      if (param_1 == DAT_089d4770) {
        iVar2 = 0;
        DAT_089d4770 = iVar3;
      }
      else {
        iVar1 = *(int *)(DAT_089d4770 + 0x78);
        if (*(int *)(DAT_089d4770 + 0x78) == param_1) {
          *(int *)(DAT_089d4770 + 0x78) = iVar3;
        }
        else {
          do {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar2 + 0x78);
          } while (*(int *)(iVar2 + 0x78) != param_1);
          *(int *)(iVar2 + 0x78) = iVar3;
        }
      }
      if (param_1 == DAT_089d4774) {
        DAT_089d4774 = iVar2;
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

