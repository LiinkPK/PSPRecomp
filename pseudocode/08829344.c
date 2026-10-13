/* Entry 0x08829344 | file offset 0x0002631C | FUN_08829344 | bytes 240 */

undefined4 FUN_08829344(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_1 + 8;
  cVar1 = *(char *)(*(int *)(param_2 + 0x4c) + 4);
  if (*(byte *)(param_1 + 2) != 0) {
    do {
      if (*(char *)(iVar4 + 4) == '\0') {
        cVar2 = *(char *)(iVar4 + 6);
LAB_0882937c:
        if ((cVar2 == '\0') || (cVar2 == cVar1)) {
          return 1;
        }
      }
      else if (*(char *)(iVar4 + 4) == '[') {
        cVar2 = *(char *)(iVar4 + 6);
        goto LAB_0882937c;
      }
      iVar4 = iVar4 + 0xc + (uint)*(byte *)(iVar4 + 5) * 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  iVar3 = 0;
  iVar4 = param_1 + (uint)*(ushort *)(param_1 + 4);
  if (*(byte *)(param_1 + 3) != 0) {
    do {
      if ((*(char *)(iVar4 + 2) == '\x04') &&
         ((*(char *)(iVar4 + 4) == '\0' || (*(char *)(iVar4 + 4) == cVar1)))) {
        return 1;
      }
      iVar4 = iVar4 + 8 + (uint)*(byte *)(iVar4 + 3) * 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 3));
  }
  return 0;
}

