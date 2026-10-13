/* Entry 0x088C7F9C | file offset 0x000C4F74 | FUN_088c7f9c | bytes 72 */

int FUN_088c7f9c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_088c7f78();
  if (iVar1 == 1) {
    iVar2 = (int)(param_1 & 0x6000) >> 0xd;
  }
  return iVar2;
}

