/* Entry 0x0886453C | file offset 0x00061514 | FUN_0886453c | bytes 160 */

void FUN_0886453c(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == '\x01') {
    uVar2 = 0x40000001;
  }
  do {
    FUN_08864b68(param_1,1);
    iVar1 = sceIoOpen(param_2,uVar2,0);
    if (-1 < iVar1) {
      return;
    }
  } while (param_3 != '\x01');
  return;
}

