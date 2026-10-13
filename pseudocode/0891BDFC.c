/* Entry 0x0891BDFC | file offset 0x00118DD4 | FUN_0891bdfc | bytes 276 */

bool FUN_0891bdfc(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((*(char *)(param_1 + 1) == '\x01') && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    pcVar2 = (char *)(param_1 + 0x2a04 + param_2 * 0xd);
    puVar4 = (uint *)(param_1 + 0x48 + param_2 * 0xea8);
    if (*(char *)(param_1 + 2) == '\x01') {
      if (param_2 == 1) {
        return *pcVar2 + 1 < (int)((int)*puVar4 / 2 + (*puVar4 & 1));
      }
      uVar3 = *puVar4;
    }
    else {
      uVar3 = *puVar4;
    }
    bVar1 = *pcVar2 + 1 <= (int)uVar3 / 2;
  }
  else {
    bVar1 = (int)*(char *)(param_1 + (1 - param_2) * 0xd + 0x2a05) <
            *(int *)(param_1 + 0x48 + (1 - param_2) * 0xea8) + -1;
  }
  return bVar1;
}

