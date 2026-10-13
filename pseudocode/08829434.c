/* Entry 0x08829434 | file offset 0x0002640C | FUN_08829434 | bytes 340 */

undefined4 FUN_08829434(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = (ushort *)(param_1 + (uint)*(ushort *)(param_1 + 4));
  iVar2 = 0;
  if (*(byte *)(param_1 + 3) != 0) {
    do {
      uVar4 = (uint)*(byte *)((int)puVar3 + 5);
      if (uVar4 == 0) {
LAB_088294fc:
        if (((char)puVar3[1] == '3') && (*(float *)(param_5 + 0x78) <= (float)*puVar3)) {
          if ((char)puVar3[2] == '\0') {
            bVar1 = (byte)puVar3[3];
          }
          else {
            if ((char)puVar3[2] != *(char *)(*(int *)(param_5 + 0x4c) + 4)) goto LAB_0882954c;
            bVar1 = (byte)puVar3[3];
          }
          if ((bVar1 == 0) || (bVar1 - 1 == param_4)) {
            return 1;
          }
        }
      }
      else if (uVar4 == 4) {
        if ((param_2 == 2) && (param_3 != 1)) goto LAB_088294fc;
      }
      else if (uVar4 == 5) {
        if ((param_2 != 2) || (param_3 != 0)) goto LAB_088294fc;
      }
      else if (param_2 == 6) {
        if ((uVar4 == 6) || (uVar4 == 1)) goto LAB_088294fc;
      }
      else if ((param_2 == 0) || (uVar4 == param_2)) goto LAB_088294fc;
LAB_0882954c:
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + (uint)*(byte *)((int)puVar3 + 3) * 2 + 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 3));
  }
  return 0;
}

