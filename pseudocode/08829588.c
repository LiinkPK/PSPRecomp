/* Entry 0x08829588 | file offset 0x00026560 | FUN_08829588 | bytes 368 */

undefined4 FUN_08829588(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  
  puVar4 = (ushort *)(param_1 + 8);
  iVar3 = 0;
  if (*(byte *)(param_1 + 2) != 0) {
    do {
      uVar6 = (uint)*(byte *)((int)puVar4 + 7);
      if (uVar6 == 0) {
LAB_08829654:
        cVar1 = (char)puVar4[2];
        if (cVar1 == '\x01') {
          uVar5 = *puVar4;
        }
        else if (cVar1 == 'g') {
          uVar5 = *puVar4;
        }
        else if (cVar1 == 'x') {
          uVar5 = *puVar4;
        }
        else {
          if (cVar1 != 'y') goto LAB_088296bc;
          uVar5 = *puVar4;
        }
        if (*(float *)(param_5 + 0x78) <= (float)uVar5) {
          if ((char)puVar4[3] == '\0') {
            bVar2 = (byte)puVar4[4];
          }
          else {
            if ((char)puVar4[3] != *(char *)(*(int *)(param_5 + 0x4c) + 4)) goto LAB_088296bc;
            bVar2 = (byte)puVar4[4];
          }
          if ((bVar2 == 0) || (bVar2 - 1 == param_4)) {
            return 1;
          }
        }
      }
      else if (uVar6 == 4) {
        if ((param_2 == 2) && (param_3 != 1)) goto LAB_08829654;
      }
      else if (uVar6 == 5) {
        if ((param_2 != 2) || (param_3 != 0)) goto LAB_08829654;
      }
      else if (param_2 == 6) {
        if ((uVar6 == 6) || (uVar6 == 1)) goto LAB_08829654;
      }
      else if ((param_2 == 0) || (uVar6 == param_2)) goto LAB_08829654;
LAB_088296bc:
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + (uint)*(byte *)((int)puVar4 + 5) * 2 + 6;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  return 0;
}

