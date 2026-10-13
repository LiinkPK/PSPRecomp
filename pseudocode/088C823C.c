/* Entry 0x088C823C | file offset 0x000C5214 | FUN_088c823c | bytes 96 */

int FUN_088c823c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088cb9e8();
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0xce4) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0xd34) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x80);
  return param_1;
}

