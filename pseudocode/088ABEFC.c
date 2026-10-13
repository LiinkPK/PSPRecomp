/* Entry 0x088ABEFC | file offset 0x000A8ED4 | FUN_088abefc | bytes 136 */

uint FUN_088abefc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x868) != 0) {
    iVar2 = param_1 + 0x8a4;
    do {
      iVar1 = FUN_08935b50(param_1 + 0x1a4,iVar2,0x14);
      if (iVar1 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x48;
    } while (uVar3 < *(uint *)(param_1 + 0x868));
  }
  return 0xffffffff;
}

