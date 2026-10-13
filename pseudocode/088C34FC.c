/* Entry 0x088C34FC | file offset 0x000C04D4 | FUN_088c34fc | bytes 196 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7588. Boundary still requires runtime validation. */

byte FUN_088c34fc(int *param_1)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  
  psVar2 = &DAT_089cbab0;
  *param_1 = 1;
  param_1[1] = 1;
  iVar3 = 0;
  do {
    bVar1 = true;
    iVar6 = 0;
    psVar5 = (short *)((int)&DAT_089cbab0 + iVar3);
    do {
      uVar4 = (uint)*psVar5;
      if ((-1 < (int)uVar4) &&
         ((*(uint *)(DAT_089d726c + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) == 0)) {
        bVar1 = false;
        break;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar6 < 3);
    if (!bVar1) {
      bVar1 = true;
      *param_1 = 0;
      goto LAB_088c35b8;
    }
    psVar2 = psVar2 + 3;
    iVar3 = iVar3 + 6;
    if (*psVar2 == -1) {
      bVar1 = *param_1 < 1;
LAB_088c35b8:
      return bVar1 ^ 1;
    }
  } while( true );
}

