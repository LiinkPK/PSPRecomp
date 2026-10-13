/* Entry 0x088C3450 | file offset 0x000C0428 | FUN_088c3450 | bytes 172 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7584. Boundary still requires runtime validation. */

bool FUN_088c3450(int *param_1,undefined4 param_2,int *param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  
  psVar1 = &DAT_089cbab0;
  *param_1 = 0;
  iVar3 = *param_3;
  param_1[1] = iVar3;
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar7 = 0;
    psVar6 = (short *)((int)&DAT_089cbab0 + iVar2);
    do {
      uVar5 = (uint)*psVar6;
      if ((-1 < (int)uVar5) &&
         ((*(uint *)(DAT_089d726c + (uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) != 0)) {
        iVar4 = iVar4 + 1;
        *param_1 = iVar4;
        break;
      }
      iVar7 = iVar7 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar7 < 3);
    psVar1 = psVar1 + 3;
    iVar2 = iVar2 + 6;
    if (*psVar1 == -1) {
      return iVar3 <= iVar4;
    }
  } while( true );
}

