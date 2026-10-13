/* Entry 0x088296F8 | file offset 0x000266D0 | FUN_088296f8 | bytes 336 */

undefined4 FUN_088296f8(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  
  iVar3 = param_1 + 8;
  iVar2 = 0;
  if (*(byte *)(param_1 + 2) != 0) {
    do {
      uVar5 = (uint)*(byte *)(iVar3 + 7);
      if (uVar5 == 0) {
LAB_088297c0:
        cVar4 = *(char *)(iVar3 + 4);
        if (cVar4 == '\x01') {
          cVar4 = *(char *)(iVar3 + 6);
        }
        else if (cVar4 == 'g') {
          cVar4 = *(char *)(iVar3 + 6);
        }
        else if (cVar4 == 'x') {
          cVar4 = *(char *)(iVar3 + 6);
        }
        else {
          if (cVar4 != 'y') goto LAB_0882980c;
          cVar4 = *(char *)(iVar3 + 6);
        }
        if (cVar4 == '\0') {
          bVar1 = *(byte *)(iVar3 + 8);
        }
        else {
          if (cVar4 != *(char *)(*(int *)(param_5 + 0x4c) + 4)) goto LAB_0882980c;
          bVar1 = *(byte *)(iVar3 + 8);
        }
        if ((bVar1 == 0) || (bVar1 - 1 == param_4)) {
          return 1;
        }
      }
      else if (uVar5 == 4) {
        if ((param_2 == 2) && (param_3 != 1)) goto LAB_088297c0;
      }
      else if (uVar5 == 5) {
        if ((param_2 != 2) || (param_3 != 0)) goto LAB_088297c0;
      }
      else if (param_2 == 6) {
        if ((uVar5 == 6) || (uVar5 == 1)) goto LAB_088297c0;
      }
      else if ((param_2 == 0) || (uVar5 == param_2)) goto LAB_088297c0;
LAB_0882980c:
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc + (uint)*(byte *)(iVar3 + 5) * 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 2));
  }
  return 0;
}

