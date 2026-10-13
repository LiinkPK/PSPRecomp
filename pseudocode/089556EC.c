/* Entry 0x089556EC | file offset 0x001526C4 | FUN_089556ec | bytes 544 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dba4c. Boundary still requires runtime validation. */

undefined4 FUN_089556ec(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  *(undefined2 *)(param_4 + 1) = 0;
  *param_4 = -*(float *)(*(int *)(param_2 + 0x88) + 0x160);
  if ((float)*(ushort *)(param_3 + 0x18) != 0.0) {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *param_4 = *param_4 +
               (float)*(ushort *)(param_3 + 0x18) *
               ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0);
  }
  bVar1 = *(byte *)(param_3 + 0x1a);
  uVar2 = 0;
  if (bVar1 < 2) {
    uVar2 = 0;
    if (bVar1 != 0) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      uVar2 = 0x7f < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 256.0);
    }
  }
  else if (bVar1 < 3) {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    if (0x7f < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 256.0)) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
    if (bVar1 < 4) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      iVar3 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 255.0);
      uVar2 = (undefined1)((int)(iVar3 + ((uint)(iVar3 >> 6) >> 0x1a)) >> 6);
    }
  }
  *(undefined1 *)((int)param_4 + 6) = uVar2;
  return 1;
}

